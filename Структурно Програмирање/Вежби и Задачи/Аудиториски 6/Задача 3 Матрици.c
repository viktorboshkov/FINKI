//Задача 3
//Да се напише програма која за квадратна матрица внесена од тастатура ќе
//испечати на екран дали таа е симетрична во однос на главната дијагонала.
#include <stdio.h>
#define MAX 100

int main() {
    int MAT[MAX][MAX];
    int n, entry,flag = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &entry);
            MAT[i][j] = entry;

        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(MAT[i][j] != MAT[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag){
        printf("Symetrical");
    } else printf("Not symmetrical");

    return 0;
}
