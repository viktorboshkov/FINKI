//Задача 5
//Да се напише програма за ротирање на елементите на една низа за едно место
//во десно. На крај, да се испечати на екран ротираната низа. Елементите од
//низата се читаат од стандарден влез.

#include <stdio.h>
#define MAX 100
int main() {

    int array[MAX];

    int n,size = 0;
    for(int i = 0; i < MAX; i++){
        if(scanf("%d", &n)) {
            array[i] = n;
            size++;
        }else break;
    }
    int tmp;

    tmp = array[size-1]; //save the last element
    for(int i = size - 1; i > 0; i--){ // 1 2 3 4 5 - >
        array[i] = array[i-1];
    }
    array[0] = tmp;

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
