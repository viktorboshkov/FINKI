//Да се напише програма што проверува дали дадена година што се вчитува од
//        тастатура е престапна или не и на екран печати соодветна порака.
//Пример престапни години:
//1976, 2000, 2004, 2008, 2012…

// престапна година е година што е делива со 4  но не е делива со 100 освен
//ако не е делива со 400 - АКО Е ДЕЛИВА СО 400 ТОА ЗНАЧИ ДЕКА Е ДОВОЛНО ЗА ДА БИДЕ
// ПРЕСТАПНА

#include <stdio.h>
int main()
{
    int year;

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("Prestapna e.");
    else printf("Ne e prestapna.");
        return(0);
}