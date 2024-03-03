// Од стандарден влез се чита еден природен број n,
// по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја,
// од вака внесените броеви.


#include <stdio.h>

int main() {

    int n, number, min = 0, max = 0, flag = 1;
    scanf("%d", &n);

    while(n){
        scanf("%d", &number);

        if(number > max){
            max = number;
            if(flag){
                min = number;
                flag = 0;
            }
        }

        if(number < min){
            min = number;
        }

        n--;
    }
    printf("%d - %d = %d", max, min, max - min);

    return 0;
}

