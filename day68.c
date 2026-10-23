#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        sum += value;
    }

    long long expected = (long long)n * (n + 1) / 2;
    printf("%lld\n", expected - sum);

    return 0;
}