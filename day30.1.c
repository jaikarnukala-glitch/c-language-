#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    int array[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}