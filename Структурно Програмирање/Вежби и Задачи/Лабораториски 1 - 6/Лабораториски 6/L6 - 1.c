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

    M += 2;
    N += 2;
    // the border is 4 sides so we add +! for each side up down left right
    int matrix[M][N];

    if(M > -1 && N <= 98) {
 // original value of M was supposed to be  M > 1 now its -2 which brings it down to 1-2  = -1 and N to 100 - 2 = 98
        for (int i = 0; i < M; i++) { // fill up array
            for (int j = 0; j < N; j++) {
                matrix[i][j] = 0; //set a border with 0s outside the matrix so that its easier to caluclate the edges
                if((i > 0 && i < M - 1) && (j > 0 && j < M - 1)) scanf("%d", &matrix[i][j]); // fill in only inside the border
            }
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if ((i > 0 && i < M - 1) && (j > 0 && j < M - 1)) { //skip border values but use them for the matrix as information outside the edges
                    if (matrix[i][j] == 0) {
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
                if((i > 0 && i < M - 1) && (j > 0 && j < M - 1)) printf("%2d ", matrix[i][j]);
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