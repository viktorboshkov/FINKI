// Од стандарден влез се чита позитивен број n кој ги дава димензиите на квадратна матрица од цели броеви,
// која се чита во продолжение. Да се напише програма која за таа матрица(макс. 100 x 100)
//cќе ја испечати должината на најдолгата строго растечка подниза,
//доколку матрицата ја гледаме ред по ред.

#include <stdio.h>
int main (){
    int n, count = 0,max = 0, postion = 0;
    scanf("%d", &n);
    int arrays[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arrays[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arrays[i][j + 1] > arrays[i][j]) count++;
                 if(count > max){
                    max = count;
                    postion = i + 1;
                }
            }
        count = 0;
        }
    
    printf("%d", postion);

    return 0;
}
