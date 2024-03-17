#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arrays[n][100];

    int size, elements;
    float mirror;

    for (int i = 0; i < n; i++) {
        scanf("%d", &size);
        elements = 0;
        mirror = 0;
        for (int j = 0; j < size; j++) {
            scanf("%d", &arrays[i][j]);
            elements++;
        } // fill in array
        int arrayReversed[elements];

        for (int j = elements - 1; j >= 0; j--) {
            arrayReversed[elements - 1 - j] = arrays[i][j];
        } // fill up the 2nd array with reversed order of elements to compare

        for (int j = 0; j < elements; j++) {
            if (arrays[i][j] == arrayReversed[j]) mirror++;
        }

        printf("%.1f%%\n", (mirror / (float)elements) * 100);
    }

    return 0;
}
