#include <stdio.h>

int main(void) {
    int n;
    int arr[10000];

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int previous_greater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_greater = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%d", previous_greater);
    }

    putchar('\n');
    return 0;
}