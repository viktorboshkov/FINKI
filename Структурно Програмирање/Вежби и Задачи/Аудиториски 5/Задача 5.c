//Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се
//        читаат исто и одлево надесно и оддесно налево.
//пример броеви
//12321 5061605
#include <stdio.h>

int main() {

    int reversedNumber  = 0,
        number,
        x;

    printf("Enter a number:\n");
    scanf("%d", &number);

    x = number; //copy number into x so that we can divide it
    while (x){
        reversedNumber = reversedNumber * 10 + (x % 10); //store the reversed value in the right order
        x /= 10;
    }

    if(reversedNumber == number) printf("%d = %d\n", number, reversedNumber);
    else printf("They're different: %d /= %d\n", number, reversedNumber);

    return 0;
}
