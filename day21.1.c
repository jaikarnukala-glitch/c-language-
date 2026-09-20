#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, middlePart;
    int divisor = 1, temp, result;

    scanf("%d", &number);

    if (number < 10) {
        printf("%d", number);
    } else {
        temp = number;

        while (temp >= 10) {
            divisor *= 10;
            temp /= 10;
        }

        firstDigit = number / divisor;
        lastDigit = number % 10;
        middlePart = (number % divisor) / 10;

        result = (lastDigit * divisor) + (middlePart * 10) + firstDigit;

        printf("%d", result);
    }

    return 0;
}