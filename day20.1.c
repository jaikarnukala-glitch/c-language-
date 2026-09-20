#include <stdio.h>

int main() {
    int number, digit, product = 1;

    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;

        if (digit % 2 != 0) {
            product *= digit;
        }

        number /= 10;
    }

    printf("%d", product);

    return 0;
}