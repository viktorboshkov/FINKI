//
//Да се напише програма каде од тастатура ќе се внесе трицифрен цел број.
//Програмата ќе ја испечати најзначајната и најмалку значајната цифра од
//бројот
//• Пример: Ако се внесе следниот бројот 795, програмата ќе испечати:
//Najznacajna cifra e 7, a najmalku znacajna e 5

#include <stdio.h>

int main() {

    int x;

    scanf("%d", &x);

    printf("Least important digit: %d\n", x%10);
    printf("Most important digit: %d\n", x/100);

    return 0;
}


