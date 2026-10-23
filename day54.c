#include <stdio.h>

int main(void) {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    long long total = n * (n + 1) / 2;
    long long left = 0;

    for (long long x = 1; x <= n; x++) {
        left += x;
        long long right = total - (x - 1) * x / 2;

        if (left == right) {
            printf("%lld\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}