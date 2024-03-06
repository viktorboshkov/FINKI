// За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.
// 0-50 = 5
// 51-60 = 6
// 61-70 = 7
// 71-80 = 8
// 81-90 = 9
// 91-100 = 10
// Покрај оценките да се испечатат и знаците + и –
// во зависност од вредноста на последната цифра на поените:
// 1 - 3 = "-"
// 4 - 7 = " "
// 8-0 = "+"

#include <stdio.h>
int main(){
    int points,
        grade,
        sign;
    scanf("%d", &points);

    if(points > 50 && points <= 100){ // не влергува да рачуна оцена ако поените се помалку од 51

        if(points >= 51 && points <= 60) grade = 6;
        if(points >= 61 && points <= 70) grade = 7;
        if(points >= 71 && points <= 80) grade = 8;
        if(points >= 81 && points <= 90) grade = 9;
        if(points >= 91 && points <= 100) grade = 10;

        sign = points % 10;

        printf("Grade: %d", grade);

        if(sign >=1 && sign <= 3) printf("-");
        else if(sign >= 4 && sign <= 7) printf(" ");
            else printf("+");

    } else printf("Grade: 5");

    return 0;
}
