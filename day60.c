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

    for (int start = 0; start <= n - k; start++) {
        int maximum = arr[start];

        for (int j = start + 1; j < start + k; j++) {
            if (arr[j] > maximum) {
                maximum = arr[j];
            }
        }

        if (start > 0) {
            putchar(' ');
        }
        printf("%d", maximum);
    }

    putchar('\n');
    return 0;
}