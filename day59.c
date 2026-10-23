#include <stdio.h>

int main(void) {
    int n, k;
    int arr[10000];

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 0;
    }

    long long window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    long long max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}