//  Задача 6
// Да се напише програма за ротирање на елементите на една низа за m местa во
// десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
// и бројот на ротирања се читаат од стандарден влез.

#include <stdio.h>
#define MAX 100
int main() {

    int array[MAX];

    int n,size = 0, m;
    scanf("%d", &m);
    for(int i = 0; i < MAX; i++){
        if(scanf("%d", &n)) {
            array[i] = n;
            size++;
        }else break;
    }


    for(int i = 0; i < m; i++){
        int tmp;
        tmp = array[size-1]; //save the last element
        for(int j = size - 1; j > 0; j--){ // 1 2 3 4 5 - > 4 5 1 2 3
            array[j] = array[j-1];
        }
        array[0] = tmp;

    }

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
