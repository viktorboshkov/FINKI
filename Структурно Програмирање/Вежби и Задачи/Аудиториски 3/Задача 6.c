//Да се напише програма каде од тастатура ќе се внесе цена на производ, број на
//рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до
//100). Програмата треба да го испечати износот на ратата и вкупната сума што
//ќе се исплати за производот

#include <stdio.h>

int main() {

    float price, //цена
          interest, //камата
          installmentValue,
          fullPrice;
    int numberOfInstallments; //број на рати

    scanf("%f %d %f", &price, &numberOfInstallments, &interest);

     interest /= 100; // каматна стапка изразена во процент

    installmentValue = (price *( 1 + interest)) / numberOfInstallments; //месечна рата

    fullPrice = installmentValue * numberOfInstallments;

    printf("The total montly payment is: %.2f\n", installmentValue);
    printf("Calculated price after interest with installments: %.2f", fullPrice);



    return 0;
}


