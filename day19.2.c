#include <stdio.h>

int main() {
    int number, sum = 0;

    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("%d", sum);

    return 0;
}