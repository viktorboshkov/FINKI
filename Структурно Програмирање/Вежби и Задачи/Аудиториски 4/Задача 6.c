//
//Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да
//        се напише програма што ќе провери дали од отсечките може да се конструира
//триаголник, при што ако може, да се провери дали истиот е правоаголен и да
//се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни
//пораки.

#include <stdio.h>
int main()
{

    float a,b,c, tmp;
    scanf("%f %f %f", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){ // проверува да нема внесено 0 во ниту една од долж. на оските
        if(a > c){
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b > c) {
            tmp = b;
            b = c;
            c = tmp;
        }//ја преместуваат должината така што најголемата долж на оска ќе биде секогаш во c

        if(a + b > c){ // uslov za da moze da se formira triagolnik
            if(c * c == a * a + b * b){ //pitagorova teorema

                printf("Moze da se formira triagolnik (Pravoagolen) i negovata ploshtina iznesuva: %.2f ", a * b / 2);
            }

        } else printf("Ne moze da se formira triagolnik od tie dolzini na otseckite!\n");

    }

    return(0);
}