// Да се напише програма каде од тастатура се внесува еден седумцифрен број.
// Програмата печати DA доколку бројот е специјален, а NE во спротивно.
// Еден број е специјален доколку за него важи дека е

// делив со својата прва цифра
// и не е делив со збирот на последните две

// или доколку не е делив со својата втора цифра
// и не е делив со збирот на последните две.
//
// Да се внимава на делење со 0,
// т.е. да се испечати порака Nevaliden broj во таков случај.
#include <stdio.h>

int main() {

    int n,
        firstDigit,
        secondDigit,
        sumLast2Digits = 0,
        counter = 0;
    scanf("%d", &n);
    if(n > 999999 && n <= 9999999 && n != 0){
        int broj = n;  // 2 1 0 5 4 7 6
        while (broj){
            counter++;
            if(counter == 7) firstDigit = broj % 10;
            if(counter == 6) secondDigit = broj % 10;
            if(counter < 3){
                sumLast2Digits += (broj % 10);
            }
            broj /= 10;
        }
        if(n % firstDigit == 0 && n % sumLast2Digits != 0) printf("Da");
        else if(n % secondDigit != 0 && n % sumLast2Digits != 0) printf("Da");
        else printf("Ne");

    } else printf("Nevaliden broj");

    return 0;
}

