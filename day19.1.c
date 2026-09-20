#include <stdio.h>

int main() {
    int a, b, x, y, remainder, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("%d", lcm);

    return 0;
}