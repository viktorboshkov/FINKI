//Задача 7
//Да се напише програма која што ќе ги избрише дупликатите од една низа. На
//        крај, да се испечати на екран новодобиената низа. Елементите од низата се
//читаат од стандарден влез.

#include <stdio.h>
#define MAX 100
int main() {

    int array[MAX];
    int size = 0, n,test = 0;

    for (int i = 0; i < MAX; i++){
        if(scanf("%d",&n)) {
            array[i] = n;
            size++;

        } else break;


    }

    for(int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++) { // 2 3 2 2 1 4 4
            if(array[i] == array[j]) {
                for (int k = j; k < size - 1; k++) {
                    array[k] = array[k+1];

                }
                j--;
                size--;
            }
        }
    }
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
