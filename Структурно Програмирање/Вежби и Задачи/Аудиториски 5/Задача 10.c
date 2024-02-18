//Да се напише програма што од непознат број на цели броеви кои се внесуваат
//од тастатура ќе ги определи позициите (редните броеви на внесување) на двата
//последователни броја што ја имаат најголемата сума. Програмата завршува ако
//        едно по друго (последователно) се внесат два негативни цели броја.

#include <stdio.h>

int main() {
    int n,
        negative = 0, //keep track of negative entrance
        i = 1,
        position,
        copyN,
        sumMax = 0,
        sum = 0;

    while (scanf("%d", &n)) { // 1 -2 -3
        if (n < 0) {
            negative++;
        } else {
            negative = 0; // reset if a positive number is entered
        }
        if (negative == 2) {
            break; // break if it reaches 2 negative numbers
        }
        if (i == 1) {
            copyN = n; // copy the previous number
            i++;
            continue; // ensure two numbers are entered
        }
        sum = n + copyN; // sum of two consecutive numbers

        if (sum > sumMax) {
            sumMax = sum;
            position = i;
        }
        copyN = n; // store the current number as the previous for the next iteration
        i++;
    }

    printf("Highest Sum: %d\n", sumMax);
    printf("Highest sum is on number entry %d and %d\n", position, position - 1);

    return 0;
}
