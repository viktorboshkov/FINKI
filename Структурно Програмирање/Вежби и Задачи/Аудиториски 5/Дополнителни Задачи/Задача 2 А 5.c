//Да се напише програма што ќе претставува едноставен калкулатор. Во
//        програмата се вчитуваат два броја и оператор во формат:
//broj1 operator broj2


#include <stdio.h>

int main() {

    char operator;
    int no1, no2;

    scanf("%d %c %d", &no1, &operator, &no2);

    switch (operator) {
        case '+':
            printf("%d %c %d = %d", no1, operator, no2, no1 + no2);
            break;
        case '-':
            printf("%d %c %d = %d", no1, operator, no2, no1 - no2);
            break;
        case '*':
            printf("%d %c %d = %d", no1, operator, no2, no1 * no2);
            break;
        case '/':
            printf("%d %c %d = %d", no1, operator, no2, no1 / no2);
            break;
        case '%':
            printf("%d %c %d = %d", no1, operator, no2, no1 % no2);
            break;

        default:
            printf("Not a valid entry.");
    }

    return 0;
}
