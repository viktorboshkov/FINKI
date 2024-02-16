//Да се напише програма за пресметување на сумата на сите парни двоцифрени
//броеви. Добиената сума се печати на екран.
//


#include <math.h>
#include <stdio.h>
int main()
{
    int sum = 0;

    for (int i = 10; i < 100; i+=2){
        sum += i;
    }

    printf("%d", sum);

    return(0);
}