//Да се напише програма за пресметување на аритметичката средина на
//броевите 3, 5 и 12.

#include <stdio.h>
#include <math.h> //за sqrt коренување
int main() {
    //Аритметичка средина добиваме со пресметување на збирот на броевите во „низата“
    //поделено со бројот на броеви во низата.

    float a = 3,
          b = 5,
          c = 12,
          x; //аритметичка средина
    int n = 3; // Бројот на броеви

    x = (a + b + c) / n;
    printf("%.2f", x);

    return 0;
}


