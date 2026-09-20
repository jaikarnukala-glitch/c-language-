#include <stdio.h>

int main() {
    int n, arr[100], position;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    /* Position is zero-based: position 2 deletes 3. */
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], i == n - 1 ? "" : " ");
    }

    return 0;
}