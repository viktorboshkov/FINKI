// Да се напише програма која ќе прочита два природни броја.
// Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број.
// Ако овој услов е исполнет, програмата печати DA, во спротивно NE.
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int digitA, digitB, flag = 0;
    while (A){
        flag = 0;
        digitA = A % 10;
        int numberB = B;
        while(numberB){
            digitB = numberB % 10;
            if(digitA == digitB){
                flag = 1;
                break;
            }
            numberB /= 10;
        }
        if(!flag) {
            break;
        }
        A /= 10;
    }
   if(flag) printf("Da");
   else printf("Ne");
     return 0;
}
