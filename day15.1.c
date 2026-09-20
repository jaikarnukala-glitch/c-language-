#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%lld", factorial);

    return 0;
}