#include <stdio.h>

int main() {
    int a, b, remainder;

    scanf("%d %d", &a, &b);

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("%d", a);

    return 0;
}