//Да се напише програма што од N цели броеви внесени од тастатура ќе ја
//определи разликата од сумите на броевите на парни и непарни позиции
//(според редоследот на внесување). Ако оваа разлика е помала од 10 на екран се
//        печати "Dvete sumi se slicni", а во спротивно "Dvete sumi mnogu se razlikuvaat".

//За броевите внесени од тастатура:
//2 4 3 4 2 1 1 6 1 7
//suma_neparni_pozicii = 9
//suma_parni_pozicii = 22
//На екран ќе се испечати:
//Dvete sumi mnogu se razlikuvaat
#include <stdio.h>
int main() {

    int n,number, //бројот на броевви што ќе се внесуваат
        evenSum = 0, //сума парни
        oddSum = 0,// сума непарни
        i = 1, // i ни треба за да провери дали се на парна или непарна позиција
        diffSums; //разлика

    scanf("%d", &n);

    while (n != 0) {
        scanf("%d", &number);
        if (i % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }
        n--;
        i++;
    }
    printf("Sum even numbers: %d \n", evenSum);
    printf("Sum odd numbers: %d \n", oddSum);

    if(evenSum > oddSum ) {
        diffSums = evenSum - oddSum;

    } else diffSums = oddSum - evenSum;

    if(diffSums < 10) printf("Similar");
    else printf("Different");

    return 0;
}
