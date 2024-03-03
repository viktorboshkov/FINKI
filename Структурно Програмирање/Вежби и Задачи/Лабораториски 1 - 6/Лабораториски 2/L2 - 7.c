// Продолжение на претходната задача:
// Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто
// ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.
// На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки.


// На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ,
// како и повратокот на ДДВ за таа сметка.
// Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари
// и за истите да се испечати соодветна порака, како во тест примерите.


//2 5 100 А 50 B 66 A 77 B 88 V 5 1003 А 510 B 666 A 737 B 883 V
//        Total tax return is: 2.73
//Total tax return is: 27.33
//Max amount of reciept: 3799. Max tax return for reciepts: 27.33

#include <stdio.h>

int main() {
    int N, M, price, fullPrice, maxPrice = 0;
    float tax, taxTotal, taxReturn, maxReturn = 0;
    char taxType;

    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        scanf("%d", &N);

        taxTotal = 0;
        fullPrice = 0;

        for (int j = 0; j < N; j++) {
            scanf("%d %c", &price, &taxType);
            switch (taxType) {
                case 'A':
                    tax = 18.0 / 100.0;
                    break;
                case 'B':
                    tax = 5.0 / 100.0;
                    break;
                case 'V':
                    tax = 0;
                    break;
                default:
                    break;
            }
            tax = price * tax;
            taxTotal += tax;
            fullPrice += price;
        }

        taxReturn = taxTotal * 0.15;

        if (fullPrice <= 30000) {
            if (fullPrice > maxPrice) {
                maxPrice = fullPrice;
                maxReturn = taxReturn;
            }
        } else {
            printf("Sum %d is bigger than 30000\n", fullPrice);
            continue;
        }

        printf("Total tax return: %.2f\n", taxReturn);
    }

    printf("Max amount of receipt: %d. Max tax return for receipts: %.2f\n", maxPrice, maxReturn);

    return 0;
}

