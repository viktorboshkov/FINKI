//Да се напише програма за пресметување на y = x^n за даден природен број n, n
//>= 1 и реален број x.

#include <math.h>
#include <stdio.h>
int main()
{
    int n, i = 0;
    float x,y = 1;

    scanf("%d %f",&n, &x);

    if(n >= 1){
        while (i != n){
            y *= x;
            i++;
        }
    }
    printf("%.2f ", y);
    return(0);
}