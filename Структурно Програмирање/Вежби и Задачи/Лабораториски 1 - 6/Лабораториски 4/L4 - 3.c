// За дадена низа од N големина, исчитајте ја истата и потоа:
// 1. Испечатете ја во нејзината оригинална форма
// 2. Сменете го распоредот на низата во обратна насока
// 3. Отстранете го секој втор член
//// 4. Повторно сменете го распоредот на низата во обратна насока
//2 3 4 5 6
//2 3 4 5 6
//6 5 4 3 2
//6 4 2
//2 4 6


// ПРВО РЕШЕНИЕ not the best
#include <stdio.h>

int main(){
    int n,
        element,
        tmp; //temporary element keep

    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &element);
        array[i] = element;
        printf("%d ", array[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i ++){
        if(n % 2 != 0) {
            tmp = array[i];
            array[i] = array[n - 1 - i];
            array[n - 1 - i] = tmp;
            if (i == n - 1 - i) break; // ако бројот на броеви во низа е непарен тогаш поместувањето ќе се врши на овој начин
        } else { //бројот на броеви е парен (n)
            tmp = array[i];
            array[i] = array[n - 1 - i];
            array[n - 1 - i] = tmp;
            if(i == (n / 2) - 1) break;
        }
    }
    int zerosC = 0; // Бројач за колку 0 ќе има во низата
    int x = 1; // remove every 2nd element;
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
        if(i == x) {
            array[i] = 0;
            x += 2;
            zerosC++;
        }
    }
    int newArray[zerosC],
        position = 0;
    for(int i = 0; i < n; i++) {
        if (array[i] > 0) {
            newArray[position] = array[i];
            position++;
        }
    }

    int m = zerosC; // size of the new Array

    printf("\n");
    for(int i = 0; i < m; i++){
        printf("%d ", newArray[i]);
    }

    for(int i = 0; i < m; i++) {
        if (m % 2 != 0){
            tmp = newArray[i];
            newArray[i] = newArray[m - 1 - i];
            newArray[m-1-i] = tmp;
            if(i == (m / 2) - 1) break;
        } else {
            tmp = newArray[i];
            newArray[i] = newArray[m - 1 - i];
            newArray[m-1-i] = tmp;
            if(i == m - 1 - i) break;
        }
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        printf("%d ", newArray[i]);
    }

    return 0;
}