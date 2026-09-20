#include <stdio.h>

int main() {
    int n1, n2;
    int a[100], b[100], merged[200];

    scanf("%d", &n1);

    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        merged[i] = a[i];
    }

    scanf("%d", &n2);

    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        merged[n1 + i] = b[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d", merged[i]);

        if (i < n1 + n2 - 1)
            printf(" ");
    }

    return 0;
}