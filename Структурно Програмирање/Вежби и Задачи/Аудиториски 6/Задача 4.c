#include <stdio.h>
#define MAX 100
int main() {
    int array[MAX],
        n,
        size = 0,
        ascending = 0,
        descending = 0;

    for (int i = 0; i < MAX; i++){
        if(scanf("%d",&n) != 0){ //enter a letter to end entry
            array[i] = n;
            size++;
        }
    }

    for(int i = 0; i < size - 1; i++){
        if(array[i] < array[i + 1]){
            ascending++;
        } else {
            ascending = 0;
            break;
        }
    }

    for(int i = 0; i < size - 1; i++){
        if(array[i] > array[i + 1]){
            descending++;
        } else {
            descending = 0;
            break;
        }
    }

    if(ascending) printf("The array's ascending.");
    else if(descending) printf("The array's decending.");
    else printf("Neither ascending nor descending..");

    return 0;
}
