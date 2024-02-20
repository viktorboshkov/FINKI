//Да се напише програма која за две низи кои се внесуваат од тастатура ќе
//провери дали се еднакви или не. На екран да се испачати резултатот од
//        споредбата. Максимална големина на низите е 100.
#define MAX 100
#include <stdio.h>
int main () {
    int a,b, //size of array
        n, //elements
        flagSame = 0;
    printf("Enter the size of the first array\n");
    scanf("%d", &a);

    int arrayA[a];

    printf("Enter elements for the first array: \n");
    for(int i = 0; i < a; i++){
        scanf("%d", &n);
        arrayA[i] = n;
    }

    printf("Enter the size of the second array\n");
    scanf("%d", &b);
    int arrayB[b];

    for(int i = 0; i < b; i++){
        scanf("%d", &n);
        arrayB[i] = n;
    }


    if(a != b) printf("Different arrays");
    else {
        for (int i = 0; i < a; i++) {
            if (arrayA[i] != arrayB[i]) {
                printf("Different arrays!");
                flagSame = 0;
                break;
            } else flagSame++;
        }
        if (flagSame) printf("Same");
    }
    return 0;
}