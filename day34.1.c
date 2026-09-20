#include <stdio.h>

int main() {
    int n, arr[101], position, value;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &value);

    /* Position is 0-based: position 2 means before 30. */
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    for (int i = 0; i <= n; i++) {
        printf("%d%s", arr[i], i == n ? "" : " ");
    }

    return 0;
}