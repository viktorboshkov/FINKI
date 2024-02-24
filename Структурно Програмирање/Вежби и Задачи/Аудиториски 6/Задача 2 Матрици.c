//Задача 2
//Да се напише програма која за матрица внесена од тастатура ќе ги замени
//        елементите од главната дијагонала со разликата од максималниот и
//минималниот елемент во матрицата. Резултантната матрица да се испечати
//        на екран
#include <stdio.h>
#define MAX 100

int main() {
    int MAT[MAX][MAX];
    int n, m, entry, max = 0, min = 0, difference, flag = 1;
    printf("Enter size of Matrix: N: M: \n");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &entry);
            MAT[i][j] = entry;

            if(entry > max){
                max = entry;
                if(flag){
                    min = entry;
                    flag = 0;
                    continue;
                }
            }
            if(min > entry){
                min = entry;
            }

        }
    }

    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++) {
            printf("%4d ", MAT[i][j]);
        }
    }


   difference = max - min;

    printf("\n Max: %d Min: %d", max, min);

    return 0;
}
