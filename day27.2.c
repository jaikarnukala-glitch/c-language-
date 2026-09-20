#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 1; i <= 4; i++) {
        for (spaces = 1; spaces <= 4 - i; spaces++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 3; i >= 1; i--) {
        for (spaces = 1; spaces <= 4 - i; spaces++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}