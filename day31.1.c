#include <stdio.h>

int main() {
    int n, key, index = -1;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}