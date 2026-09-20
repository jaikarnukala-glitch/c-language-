#include <stdio.h>

int main() {
    int number, reversed = 0, digit;

    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("%d", reversed);

    return 0;
}