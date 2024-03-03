// сите операции на два броја

#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    if(m > n){
        int tmp;
        tmp = m;
        m = n;
        n = tmp;
    }

    printf("%d + %d = %d\n", n, m, n + m);
    printf("%d - %d = %d\n", n, m, n - m);
    printf("%d * %d = %d\n", n, m, n * m);
    printf("%d / %d = %d\n", n, m, n / m);
    printf("%d %% %d = %d\n", n, m, n % m);

    return 0;
}

