#include <stdio.h>

int main() {
    int n, i, maximum, minimum;
    int array[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    maximum = minimum = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }

        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    printf("Max=%d, Min=%d", maximum, minimum);

    return 0;
}