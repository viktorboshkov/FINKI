// Да се напише програма во која се вчитува матрица (со димензии M и N, 1 < M,N <= 100) од цели броеви.
// Сите елементи од матрицата се поставени на вредност 0 или 1.
// Да се формира нова матрица така што на местото на сите елементи што имаат вредност 0,
// треба да се смести бројот на елементи со вредност 1 околу тој елемент во сите осум насоки.
// Новодобиената матрица да се отпечати на стандарден излез,
// при што наместо елементите со вредност 1 од оригиналната матрица ќе се отпечати знак *.

//Цел: Формирање на нова матрица, каде што сите елементи со вредност 0 во влезната матрица ќе бидат заменети со бројот на соседни елементи со вредност 1.

#include <stdio.h>
int main (){
    int M, N, count = 0;
    scanf("%d %d", &M, &N);
    int matrix[M][N];
    int newMatrix[M][N];
    if(M > 1 && N <= 100) {

        for (int i = 0; i < M; i++) { // fill up array
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
                if(matrix[i][j] == 1) newMatrix[i][j] = 1;
            }
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if(matrix[i][j] == 0) {
                    if (i == 0) {
                        if (j == 0) {
                            if (matrix[i][j + 1] == 1) count++;
                            if (matrix[i + 1][j] == 1) count++;
                            if (matrix[i + 1][j + 1] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                        if (j == N - 1) {
                            if (matrix[i][j - 1] == 1) count++;
                            if (matrix[i + 1][j - 1] == 1) count++;
                            if (matrix[i + 1][j] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                        if (matrix[i][j] == 0) {
                            if (matrix[i][j - 1] == 1) count++;
                            if (matrix[i + 1][j - 1] == 1) count++;
                            if (matrix[i + 1][j] == 1) count++;
                            if (matrix[i + 1][j + 1] == 1) count++;
                            if (matrix[i][j + 1] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                    }
                    if (j == 0 && i > 0 && i < M - 1) {
                        if (matrix[i - 1][j] == 1) count++;
                        if (matrix[i - 1][j + 1] == 1) count++;
                        if (matrix[i][j + 1] == 1) count++;
                        if (matrix[i + 1][j] == 1) count++;
                        if (matrix[i + 1][j + 1] == 1) count++;
                        matrix[i][j] = count;
                        count = 0;
                    }
                    if (i == M - 1) {
                        if (j == 0) {
                            if (matrix[i - 1][j] == 1) count++;
                            if (matrix[i - 1][j + 1] == 1) count++;
                            if (matrix[i][j + 1] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                        if (j > 0 && j < N - 1) {
                            if (matrix[i - 1][j] == 1) count++;
                            if (matrix[i - 1][j + 1] == 1) count++;
                            if (matrix[i - 1][j - 1] == 1) count++;
                            if (matrix[i][j - 1] == 1) count++;
                            if (matrix[i][j + 1] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                        if (j == N - 1) {
                            if (matrix[i - 1][j] == 1) count++;
                            if (matrix[i - 1][j - 1] == 1) count++;
                            if (matrix[i][j - 1] == 1) count++;
                            matrix[i][j] = count;
                            count = 0;
                        }
                    }
                    if (j == M - 1 && i > 0 && i < M - 1) {
                        if (matrix[i - 1][j] == 1) count++;
                        if (matrix[i - 1][j - 1] == 1) count++;
                        if (matrix[i][j - 1] == 1) count++;
                        if (matrix[i + 1][j - 1] == 1) count++;
                        if (matrix[i + 1][j] == 1) count++;
                        matrix[i][j] = count;
                        count = 0;

                    }
                    if (i > 0 && j > 0 && i < M - 1 && j < M - 1) {
                        if (matrix[i][j + 1] == 1) count++;
                        if (matrix[i][j - 1] == 1) count++;
                        if (matrix[i + 1][j - 1] == 1) count++;
                        if (matrix[i + 1][j + 1] == 1) count++;
                        if (matrix[i + 1][j] == 1) count++;
                        if (matrix[i - 1][j - 1] == 1) count++;
                        if (matrix[i - 1][j + 1] == 1) count++;
                        if (matrix[i - 1][j] == 1) count++;
                        matrix[i][j] = count;
                        count = 0;
                    }
                }
            }
        }

        for (int i = 0; i < M; i++) { //print
            for (int j = 0; j < N; j++) {
                if(matrix[i][j] == 1 && newMatrix[i][j] == 1) printf(" * ");
                else printf("%2d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
        return 0;
}

//5 5
//0 1 0 1 0
//1 0 0 0 1
//0 0 1 0 0
//1 0 0 0 1
//0 1 0 1 0

//2 * 2 * 2
//* 3 3 3 *
//2 3 * 3 2
//* 3 3 3 *
//2 * 2 * 2
