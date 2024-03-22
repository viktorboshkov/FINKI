// Да се имплементира функција elka(int n) што на стандарден излез ќе печати новогодишна елка од ѕвезди.
// n означува колку ѕведички има основата на елката и во сите тест примери n е непарен број.
#include <stdio.h>

void elka(int n){
    int middle = n / 2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == middle || j <= middle + i && j > middle - i) printf("*");
              else printf("-");
        }
        printf("\n");
        if(i == middle) break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 != 0) elka(n);
    else printf("It has to be an uneven number.");

    return 0;
}
