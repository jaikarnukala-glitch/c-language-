#include <stdio.h>

int main() {
    int n, arr[101], position, value;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &value);

    /* Position is zero-based, as shown in the sample. */
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i < n - 1)
            printf(" ");
    }

    return 0;
}