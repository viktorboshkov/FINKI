#include <stdio.h>

int main() {
    int x, // original number
    n, // copy of original number but dividable so we can break it down and check if it's applicable to the requirements
    sum = 0, // resets after each check, sums up all digits before the most important one
    digit, // resembles single digit
    firstDigit; // highest value digit we get this one once there's no reminder when dividing 10 meaning its the last most valuable digit

    x = 1000;
    while (x <= 9999) {
        n = x;
        sum = 0; // Reset sum for each iteration
        while (n) {
            digit = n % 10;
            if (n / 10 != 0) {
                sum += digit;
            } else {
                firstDigit = digit; // Assign last digit to firstDigit
            }
            n /= 10;
        }

        if (sum == firstDigit) {
            printf("%d ", x);
        }
        x++;
    }
    return 0;
}
