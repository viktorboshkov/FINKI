// Да се напише програма во која во даден опсег на природни броеви [a,b],
// ќе се најдат и отпечатат сите броеви чијшто збир на цифри
// кои се деливи со 2 е поголем од 0 и е делив со 4.
// На крај да се отпечати и бројот на вакви броеви.

#include <stdio.h>

int main(){
   int a, b, number, digit, sumDigits, counter = 0, flag = 0;
    scanf("%d %d", &a, &b);

   for(int i = a; i <= b; i++){
        number = i;
        sumDigits = 0;

       while (number){
           digit = number % 10;
           if (digit % 2 == 0) {
               if (number > 9) sumDigits += digit;
               else sumDigits += number;
               number /= 10;
           } else {
                flag = 0;
               break;
           }
           flag++;
       }
        if(flag) {
            if(sumDigits > 0 && sumDigits % 4 == 0){
            printf("Vkupno: %d\n", i);
            counter++;
            }
        }
   }

    printf("%d", counter);
    return 0;

}