#include <stdio.h>

int main() {
    int n, i, j, isPrime, first = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }

    return 0;
}