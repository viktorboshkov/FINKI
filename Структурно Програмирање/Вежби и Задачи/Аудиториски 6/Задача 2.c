//Задача 2
//Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
//        го пресмета збирот на парните елементи, збирот на непарните елементи, како
//и односот помеѓу бројот на парни и непарни елементи. Резултатот да се
//        испечати на екран.
////
//За низата: 3 2 7 6 2 5 1 На екран ќе се испечати:
//Suma parni: 8
//Suma neparni: 16
//Odnos: 0.75

#define MAX 100
#include <stdio.h>
int main () {
    int array[MAX],
        n,
        size = 0,
        sumEven = 0,
        sumOdd = 0,
        even = 0,
        odd = 0;

    for(int i = 0; i < MAX; i++) {
        if (scanf("%d", &n) != 0) {
            array[i] = n;
            size++;
            for(int j = 0; j < size; j++){
                if(array[i]==array[j] && i != j) array[i] = 0;
            }
        } else break;

        if(array[i] % 2 == 0){
            sumEven += array[i];
            even++;
        }else {
            sumOdd += array[i];
            odd++;
        }
        printf("%d \n", array[i]);
    }

    printf("Sum of Even numbers: %d \n", sumEven);
    printf("Sum of Odd numbers: %d \n", sumOdd);
    printf("Sum of Even numbers: %.2f \n", (float)even / odd);

        return 0;
}