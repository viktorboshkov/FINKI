//Задача 6
//Да се напише програма за ротирање на елементите на една низа за m местa во
//        десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
//        и бројот на ротирања се читаат од стандарден влез.


#include <stdio.h>
#define MAX 100
int main() {

    int array[MAX];
 // 1 2 3 4  / m = 2
    int n,size = 0, m;

    scanf("%d", &m);
    for(int i = 0; i < MAX; i++){
        if(scanf("%d", &n)) {
            array[i] = n;
            size++;
        }else break;
    }

    int tmp[m];

    for(int i = 0; i < m; i++){
        tmp[i] = array[size - m + i];

    }
    for(int i = 0; i < size; i++){
        if(i < m) printf("%d ", tmp[i]);
        else printf("%d ", array[i-m]);
    }

    return 0;
}
