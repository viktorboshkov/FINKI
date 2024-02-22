
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

    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
