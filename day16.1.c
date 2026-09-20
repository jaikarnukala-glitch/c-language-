#include <stdio.h>

int main() {
    int number, binary[32], i = 0, j;

    scanf("%d", &number);

    if (number == 0) {
        printf("0");
    } else {
        while (number > 0) {
            binary[i] = number % 2;
            number /= 2;
            i++;
        }

        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    return 0;
}