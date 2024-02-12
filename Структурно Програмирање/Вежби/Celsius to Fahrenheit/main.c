
//Да се напише програма во C за конверзија на Целзиусови
//во Фаренхајтови степени. Целзиусовите степени се
//внесуваат од тастатура, а формулата за претворање
//гласи:
//f = 1.8C + 32

#include <stdio.h>

int main() {
    float celsius,
            fahrenheit;

    scanf("%f",&celsius);

    fahrenheit = 1.8 * celsius + 32;

    printf("%.1f F", fahrenheit);

    return 0;
}
