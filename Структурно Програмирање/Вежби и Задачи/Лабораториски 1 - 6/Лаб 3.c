// Од стандарден влез се внесуваат два цели броеви A и P.
// Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A]
// за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.
// Ако нема такви броеви во интервалот, да се испечати порака NEMA.

#include <stdio.h>

int main(){
    int A,
        counter = 0, number = 0;

    float P,
          sumDigits;

    scanf("%d %f", &A, &P);

    for(int i = A - 1; i > 0 && counter < 5; i--){
        number = i;
        sumDigits = 0;
        while(number){
            if(number < 10) sumDigits += number;
            else sumDigits += (number % 10);
            number /= 10;
        }

        if(sumDigits ==(P / 100.0) * i) {
            counter++;
            printf("%d\n", i);
        }

    }
    if(counter == 0) printf("Nema");


    return 0;

}