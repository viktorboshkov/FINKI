// Од стандарден влез се чита позитивен непарен број n (n е најмалку 3)
// кој ги дава димензиите на квадратната матрица од цели броеви,
// која се чита во продолжение. Да се напише програма која од таа матрица(макс. 100 x 100)
// ќе креира нова матрица 2 x 2,
// која ќе ги има за елементи збировите на елементите на регионите на првата матрица, соодветно.
      //region n / 2
// 1 2  3  4 5
// 5 3  2  1 2
//  4 2 1 2 2 // region n / 2
// 4 4  2  1 2
// 1 2  4  5 2

#include <stdio.h>

int main() {
    int n, region;

    scanf("%d", &n);
    region = n / 2;
    int matrix[n][n],
        M[2][2] ={0, 0, 0, 0};

    if(n < 0) n *= -1;
    if(n >= 3 && n <= 100){

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &matrix[i][j]);
                if(i < region && j < region) M[0][0] += matrix[i][j];
                if(i < region && j > region) M[0][1] += matrix[i][j];
                if(i > region && j < region) M[1][0] += matrix[i][j];
                if(i > region && j > region) M[1][1] += matrix[i][j];
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%1d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Test case
//5
//1 6 8 9 1
//3 6 8 8 9
//3 5 6 7 1
//9 2 9 2 9
//5 6 7 8 8
//16 27
//22 27