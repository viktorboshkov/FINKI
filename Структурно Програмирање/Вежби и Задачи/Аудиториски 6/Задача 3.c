//Да се напише програма која ќе го пресмета скаларниот производ на два
//вектори со по n координати. Бројот на координати n, како и координатите на
//        векторите се внесуваат од стандарден влез. Резултатот да се испечати на екран.
// scalar = a[i] * b[i];

#include <stdio.h>
int main () {

    int v1, v2, n, flag = 0, scalar = 0,
        vectorA[n], //coordinate 1
        vectorB[n]; // coordinate 2
    printf("Number of coordinates: \n");
    scanf("%d", &n);

    printf("Enter coordinates for Vector A then Vector B: \n");
    printf("A: B: \n");
    // I had the idea of it to be like (x1, y1)...
    for(int i = 0; i < n; i++) {
        if(scanf("%d %d", &v1, &v2) != 0){

            vectorA[i] = v1;
            vectorB[i] = v2;
        } else {
            flag++;
        }
    }
    if(!flag){
        for(int i = 0; i < n; i++){
            scalar += (vectorA[i]*vectorB[i]);
        }

    } else printf("Wrong coordinates\n");

    printf("The scalar value of the coordinates is: %d", scalar);

        return 0;
}