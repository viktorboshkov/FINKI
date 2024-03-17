// Од стандарден влез се чита позитивен број n кој ги дава димензиите на квадратна матрица од цели броеви,
// која се чита во продолжение. Да се напише програма која за таа матрица(макс. 100 x 100)
// ќе ја испечати должината на најдолгата строго растечка подниза,
// доколку матрицата ја гледаме ред по ред.

#include <stdio.h>

int main(){
    int n,
        max = 0,
        arrayMax = 0,
        counter = 0,
        globalMAX = 0,
        position;
    scanf("%d", &n);
    if(n < 0) n*=(-1);
        int array[n][n];
        for(int i = 0; i < n && n <= 100; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &array[i][j]);
            }
        for(int m = 0; m < n && m < n - 1; m++){

            if(array[i][m + 1] > array[i][m]){
                counter++;
            } else {
                max = counter;
                if(max > arrayMax){
                    arrayMax = max;
                    counter = 0; //reset counter if the current array has run into a decrementing value and start counting over for the same array
                }
            }


        }   // check max in array ( m is the same as j) its just more visible this way
        counter = 0; //reset the counter for every new array

        if(arrayMax > globalMAX){
            globalMAX = arrayMax;
            position = i + 1;
        }
        arrayMax = 0;
    }

    printf("%d", position); // for true position
    return 0;
}