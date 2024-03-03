// Да се напише програма во која во даден опсег на природни броеви [m,n],
// ќе се најдат и отпечатат во нов ред сите броеви
// за кои важи дека збирот на бројот со неговата слика
// (број кој ги има истите цифри, но во обратен редослед)
// е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.

#include <stdio.h>
int main() {
    int m,n, tmp;
    int broj, slika = 0, zbir = 0, counter = 0;
    scanf("%d %d", &m,&n);

    if(m > n){
        tmp = m;
        m = m;
        n = tmp;
    }

    while(m <= n){
        broj = m;
        while(broj > 0){
            slika = slika * 10 + broj % 10;
            broj /= 10;
        }
        zbir = m + slika;
        if(zbir <= m * 2){
            printf("%d\n", m);
            counter++;
        }
        m++;
        slika = 0;
    }
    printf("Vkupno: %d\n", counter);

    return 0;
}
