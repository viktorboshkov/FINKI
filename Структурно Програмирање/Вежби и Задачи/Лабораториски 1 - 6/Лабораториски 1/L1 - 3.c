// аритметичка средина на 5 броеви
#include <stdio.h>

int main() {
    int n,
        number;

    float sum = 0;
    scanf("%d", &n);
    int counter = n;
    while(counter){
        scanf("%d", &number);
        sum += number;
        counter--;
    }

    printf("%.2f", sum / n);
    return 0;
}

