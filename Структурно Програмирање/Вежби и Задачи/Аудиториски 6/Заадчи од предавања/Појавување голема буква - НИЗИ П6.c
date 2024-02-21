//Да се напише програма што ќе изброи колку пати секоја голема буква се појавува
//во текст внесен од тастатура.

#include <stdio.h>
#include <ctype.h>
#define SIZE 91
int main () {
    char words[SIZE],
        letterCount[25],
        letter,
        c = 'A';

        for (int i = 0; i < SIZE; i++){
            scanf("%c", &letter);

            if(letter =='0') break;

            words[i] = letter;
                if(words[i] >= 'A' && words[i] <= 'Z'){
                    for(int j = 0; j < 25; j++){
                        if(words[i] == 'A' + j) {
                            letterCount[j]++;
                            break; // ако најде буква тогаш премини на друга буква што е внесена нема што да проверува за истата
                        }
                    }
                }

    }

    for(int i = 0; i <= 25; i++) {
        printf("%c %5d\n", c + i, letterCount[i]);
    }


//    printf("%c %d %c %d", 'A', 'A', 'A' + 1, 'A');
//    printf("%d %d", 'A', 'Z'); 90 - 65 = 25, A = 65, Z = 90
    return 0;
}