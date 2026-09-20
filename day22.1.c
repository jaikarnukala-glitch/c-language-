#include <stdio.h>

int main() {
    int number, original, digit, i, factorial, sum = 0;

    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == original) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }

    return 0;
}