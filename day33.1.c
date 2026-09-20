#include <stdio.h>

int main() {
    int n, arr[100], key;
    int low = 0, high, mid, index = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}