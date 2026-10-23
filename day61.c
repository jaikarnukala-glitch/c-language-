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
        int first_negative = 0;

        for (int j = start; j < start + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }

        if (start > 0) {
            putchar(' ');
        }
        printf("%d", first_negative);
    }

    putchar('\n');
    return 0;
}