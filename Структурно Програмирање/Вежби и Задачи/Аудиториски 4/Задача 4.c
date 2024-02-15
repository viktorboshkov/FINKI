//Да се напише програма што за внесен број на поени од испит ќе генерира
//соодветна оценка според следната табела:
//0 - 50 5
//51 - 50 6
//61 -70 7
//71 - 80 8
//81 - 90 9
//91 - 100 10

#include <stdio.h>
int main()
{
    int points, grade;
 
    scanf("%d",&points);

    if (points <= 50) grade = 5;

    if (points >= 51 && points <= 60) grade = 6;

    if (points >= 61 && points <= 70) grade = 7;

    if (points >= 71 && points <= 80) grade = 8;

    if (points >= 81 && points <= 90) grade = 9;

    if (points >= 91 && points <= 100) grade = 10;

    printf("%d", grade);

    return(0);
}