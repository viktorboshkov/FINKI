//Да се напише програма што за знак внесен од тастатура ќе одреди дали е
//самогласка, цифра или другo.

#include <stdio.h>

int main() {

    char x;

    scanf("%c", &x);

    switch (x) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("You've entered the vowel: %c", x);
            break;
            case '0': case '1': case '2' : case '3' : case '4' : case '5' : case '6' : case '7' : case '8' : case '9' :
            printf("You've entered the number: %c", x);
            break;
        default:
            printf("You've entered something else.");
    }

    return 0;
}
