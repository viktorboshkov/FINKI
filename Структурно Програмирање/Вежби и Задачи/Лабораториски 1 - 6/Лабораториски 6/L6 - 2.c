// За дадена квадратна матрица со големина N,
// најдете ја разликата помеѓу главната и споредната дијагонала,
// а потоа разликата помеѓу првата колона и последната колона на матрицата.

#include <stdio.h>
int main (){

    int n;
    scanf("%d", &n);
    int matrix[n][n];

    int mainDiagonal = 0,
        secondaryDiagonal = 0,
        firstC = 0,
        lastC = 0;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) mainDiagonal += matrix[i][j];
            if(i == n - n + i  && j == n - 1 -  i )  secondaryDiagonal += matrix[i][j];
            if(j == 0) firstC += matrix[i][j];
            if(j == n - 1) lastC += matrix[i][j];
        }
    }

    printf("%d %d", mainDiagonal - secondaryDiagonal, firstC - lastC);

    return 0;
}