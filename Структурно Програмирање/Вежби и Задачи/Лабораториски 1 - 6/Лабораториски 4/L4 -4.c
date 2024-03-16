// Од стандарден влез се чита цел број n.
// Потоа се вчитуваат n низи од цели броеви (со максимална должина од 100 елементи),
// при што за секоја прво се внесува должината на низата,
// а потоа сите елементи на низата, па на крај бројот k.
// Да се напише програма која за секоја низа ќе ја трансформира истата,
// т.ш. за секој k-ти елемент ќе се направи замена на местата помеѓу него и неговиот претходник.
// Се смета дека важи k е најмалку 2.

#include <stdio.h>

int main(){

    int n, k;
    scanf("%d", &n); //number of arrays
    int arrays[n][100];
    for(int i = 0; i < n; i++){
        int size;
        scanf("%d", &size); // size of arrays
        for(int j = 0; j < size; j++){
            scanf("%d",&arrays[i][j]); //elemtns in the array
        }
        scanf("%d", &k); //position of k to move elemnts from
        if(k >= 2){
        for(  ; k <= size ; k +=k ){
            int tmp;
            tmp = arrays[i][k - 1];
            arrays[i][k - 1] = arrays[i][k - 2];
            arrays[i][k - 2] = tmp;
        }
    }
        printf("\n");
        for(int print = 0; print < size; print++){ // print for every array
            printf("%d ", arrays[i][print]);
        }

    }

    return 0;
}