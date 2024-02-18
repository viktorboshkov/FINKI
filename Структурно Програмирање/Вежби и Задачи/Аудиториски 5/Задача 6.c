//Да се напише програма што од непознат број на цели броеви што се внесуваат
//од тастатура ќе го определи бројот со максимална вредност. Програмата
//        завршува ако се внесе невалидна репрезентација на број.


#include <stdio.h>
int main() {
    int n, min, max = 0;
    while (scanf("%d", &n)){
        if(max < n){
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}
// mora da se vnese nekoja bukva za da zavrsi programata