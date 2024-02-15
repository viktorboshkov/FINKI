//Од тастатура се внесуваат координати на една точка од рамнина. Да се напише
//програма со која ќе се испечати на кој квадрант припаѓа внесената точка


#include <stdio.h>
int main()
{
    int x, y;

    printf("X: Y:\n");
    scanf(" %d %d", &x, &y);

    if(x > 0 && y > 0) printf("I");
        else if (x < 0 && y > 0) printf("II");
             else if (x < 0 && y < 0) printf("III");
                else if (x > 0 && y < 0) printf("IV");
                    else printf("Center");

    return(0);
}