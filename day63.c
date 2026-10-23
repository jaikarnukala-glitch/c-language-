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

    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        return 0;
    }

    /* Sort the array in ascending order. */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}