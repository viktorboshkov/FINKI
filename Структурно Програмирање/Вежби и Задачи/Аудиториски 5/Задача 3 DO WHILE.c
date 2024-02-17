#include <stdio.h>

int main() {

   int x, i = 0,  // Number of numbers that will be entered
    number, // Number entered
    rem_1 = 0, // Count of numbers with remainder 1
    rem_2 = 0, // Count of numbers with remainder 2
    div_3 = 0; // Count of numbers divisible by 3

    printf("Enter the number of elements: ");
    scanf("%d", &x);

    printf("Enter %d numbers:\n", x);
    do{
        scanf("%d", &number);
        if (number % 3 == 0) {
            div_3++;
        } else if (number % 3 == 1) {
            rem_1++;
        } else if (number % 3 == 2) {
            rem_2++;
        }
        i++;
    } while (i < x);

    printf("Divisible by 3: %d\n", div_3);
    printf("Reminder of 1: %d\n", rem_1);
    printf("Reminder of 2: %d\n", rem_2);

    return 0;
}
