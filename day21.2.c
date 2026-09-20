#include <stdio.h>

int main() {
    int number, i, sum = 0;

    scanf("%d", &number);

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number && number > 0) {
        printf("Perfect number");
    } else {
        printf("Not perfect number");
    }

    return 0;
}