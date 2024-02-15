//Да се напише програма со која ќе се отпечати максимумот од два броја чии
//вредности се читаат од тастатура.

#include <stdio.h>
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    if(x > y)
    printf("Max: %d Min: %d", x, y);
    else  printf("Max: %d Min: %d", y, x);

    return(0);
}