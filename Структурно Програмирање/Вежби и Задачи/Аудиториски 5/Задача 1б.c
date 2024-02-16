//Да се напише програма за пресметување на сумата на сите непарни
//        двоцифрени броеви. Програмата ја печати сумата на екран во следниот
//формат:

#include <math.h>
#include <stdio.h>
int main()
{
    int sum = 0;

    for (int i = 11; i < 100; i+=2){
        sum += i;
        printf("%d", i);
        if(i == 99) {
            printf(" = %d",sum);
        } else printf(" + ");
    }
    
    return(0);
}