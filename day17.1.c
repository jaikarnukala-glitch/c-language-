#include <stdio.h>
#include <math.h>

int main() {
    int number, original, temp, digit, digits = 0;
    long long sum = 0;

    scanf("%d", &number);

    original = number;
    temp = number;

    if (number == 0) {
        digits = 1;
    }

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;

    while (temp > 0) {
        digit = temp % 10;
        sum += (long long)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}