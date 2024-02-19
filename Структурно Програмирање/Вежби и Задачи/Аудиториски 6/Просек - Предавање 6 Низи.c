//Да се напише програма која ќе го
//        пресмета просекот на 10 броеви
//        внесени од тастатура. За секој број да
//се отпечати дали е под или над
//        просекот.

#include <stdio.h>
int main() {

    float average, //просек
           sum = 0;
    int n = 10,
        array[10];

    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    } //fill up the array

    average = sum / n;

    for (int i = 0; i < n; i++) {
        if (array[i] > average)
            printf("%d is above average.\n", array[i]);
            else printf("%d is below average.\n", array[i]);
    }
    return 0;
}
