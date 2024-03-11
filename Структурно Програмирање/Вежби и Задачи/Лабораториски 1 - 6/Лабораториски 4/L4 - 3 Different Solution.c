// За дадена низа од N големина, исчитајте ја истата и потоа:
// 1. Испечатете ја во нејзината оригинална форма
// 2. Сменете го распоредот на низата во обратна насока
// 3. Отстранете го секој втор член
// 4. Повторно сменете го распоредот на низата во обратна насока

#include <stdio.h>
#include <math.h>

int main(){

    int size;

    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size; i++){
        scanf("%d",&array[i]);
        printf("%d ", array[i]);
    }
    printf("\n");

    int count = 0,
        sizeNewArray = 0,
        arrayR[size];
    for(int i = size - 1; i >= 0; i--){
        arrayR[count] = array[i];
        printf("%d ", arrayR[count]);
        if(i % 2 == 0) sizeNewArray++;
        count++;
    }
    printf("\n");
    int newArray[sizeNewArray],
        newArrayReversed[sizeNewArray];
    count = 0;
    for(int i = 0; i < size; i++){
        if(i % 2 == 0) {
            newArray[count] = arrayR[i];
            printf("%d ", newArray[count]);
            count++;
        }
    }
    printf("\n");
    for(int i = sizeNewArray - 1; i >= 0; i--){
        newArrayReversed[sizeNewArray - i] = newArray[i];
        printf("%d ", newArrayReversed[sizeNewArray - i]);
    }


    return 0;
}