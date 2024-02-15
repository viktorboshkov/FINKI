//
//Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да
//        се напише програма што ќе провери дали од отсечките може да се конструира
//триаголник, при што ако може, да се провери дали истиот е правоаголен и да
//се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни
//пораки.

#include <math.h>
#include <stdio.h>
int main()
{

    float a,b,c, tmp, s, A, h;
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

            if(a != b && a != c && c != b) {//разностран триаголник
                s = (a + b + c) / 2; // Полу периметар потребен за пресметување плоштина

                A = sqrt(s*(s-a)*(s-b)*(s-c));
                printf("Raznostran triagolnik so ploshtina od: %.2f", A);
            }
            if(a == b && b == c){ // рамностран триаголник
                A = (a * a * sqrt(3)) / 4;
                printf("Ramnostran triagolnik so ploshtina od: %.2f", A);
            }
            if(a == b && c != a){ // бидејќи знаеме дека краците на рамнокрак триаголник се исти (а и б) а ц мора да биде различна должина, може само да споредиме ц со а или б
                h = sqrt(a * a - (c/2) * (c/2));
                A = (b * h) / 2;
                printf("Ramnokrak triagolnik so ploshtina od: %.2f", A);
            }


        } else printf("Ne moze da se formira triagolnik od tie dolzini na otseckite!\n");

    }

    return(0);
}