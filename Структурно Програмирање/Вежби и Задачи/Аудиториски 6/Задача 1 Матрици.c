//  Задача 1
// Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
// разликата на збирот на елементите на непарните колони и збирот на
// елементите на парните редици. Матрицата не мора да биде квадратна
include <stdio.h>
#define MAX 100

int main() {
    int MAT[MAX][MAX];
    int n, m, entry, sumEven = 0, sumOdd = 0, difference;
    printf("Enter size of Matrix: N: M: \n");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &entry);
            MAT[i][j] = entry;
            if (j % 2 != 0) sumOdd += MAT[i][j]; // Сума на непарните колони
            if (i % 2 == 0) sumEven += MAT[i][j]; // Сума на парните редици
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++) {
            printf("%3d ", MAT[i][j]);
        }
    }

    // Пресметка на разликата
    if (sumEven > sumOdd) difference = sumEven - sumOdd;
    else difference = sumOdd - sumEven;

    printf("\nEven sum: %d. Odd Sum:%d\n", sumEven, sumOdd);
    printf("Difference: %d", difference);

    return 0;
}
