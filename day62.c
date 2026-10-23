#include <stdio.h>

int main(void) {
    int n;
    long long value, current_sum, max_sum;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    if (scanf("%lld", &value) != 1) {
        return 0;
    }

    current_sum = max_sum = value;

    for (int i = 1; i < n; i++) {
        scanf("%lld", &value);

        if (current_sum + value < value) {
            current_sum = value;
        } else {
            current_sum += value;
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}