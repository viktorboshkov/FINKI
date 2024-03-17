// За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез,
// а потоа сортирајте ја низата. Испечатете ја во растечки редослед.

#include <stdio.h>

int main() {

    int n, swap;
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++) scanf("%d", &array[i]);

    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] >= array[j]) {
                swap = array[j];
                array[j] = array[i];
                array[i] = swap;
            }

        }
    }

    for(int i = 0; i < n; i++) printf("%d ", array[i]);

    return 0;
}
