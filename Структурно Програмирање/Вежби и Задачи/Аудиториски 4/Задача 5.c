
//Да се промени претходната програма, така што покрај оценките ќе се
//испечатат и знаците + и – во зависност од вредноста на последната цифра на
//поените:

#include <stdio.h>
int main()
{
    int points, grade, sign;
 
    scanf("%d",&points);

    if (points <= 50) grade = 5;

    if (points >= 51 && points <= 60) grade = 6;

    if (points >= 61 && points <= 70) grade = 7;

    if (points >= 71 && points <= 80) grade = 8;

    if (points >= 81 && points <= 90) grade = 9;

    if (points >= 91 && points <= 100) grade = 10;


    sign = points % 10;

    printf("%d", grade);

    if (points > 50) {
        if (sign >= 1 && sign <= 3) printf("-");
        if (sign >= 4 && sign <= 7) printf(" ");
        if (sign >= 8 || sign == 0) printf("+");
    }

    return(0);
}