//Да се напише програма што од непознат број на цели броеви што се внесуваат
//од тастатура ќе ги определи двата броја со најголеми вредности. Програмата
//        завршува ако се внесе невалидна репрезентација на број.
//пример
//        Ако се внесат броевите 2 4 7 4 2 1 8 6 9 7 10 3 програмата ќе отпечати 10 и 9

#include <stdio.h>
int main() {
    int n, max2 = 0, max = 0, tmp, copy = 0;
    while (scanf("%d", &n)){

        if(n > max) {
            max2 = max;
            max = n;
        }
        else if(n > max2){
            max2 = n;
        }
    }
    printf("MAX: %d - Max2: %d", max, max2);
    return 0;
}
