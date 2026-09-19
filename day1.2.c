#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        int diff = a - b;
        int product = a * b;
        int quotient = a / b;

        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    }
    return 0;
}