// сите операции на два броја
//BMI = 70 / (1.75 * 1.75)
#include <stdio.h>

int main() {
    int weight;
    float height, BMI;

    scanf("%d %f", &weight, &height);

    if(height > 2.90) height /= 100;
    BMI = weight / (height * height);
    printf("BMI: %.2f", BMI);
    return 0;
}

