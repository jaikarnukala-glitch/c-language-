#include <stdio.h>

int main() {
    int a, b;
    char operation;

    scanf("%d %d %c", &a, &b, &operation);

    switch (operation) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not allowed");
            break;
        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Modulo by zero is not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}