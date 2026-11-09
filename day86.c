#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main(void)
{
    char choice[20];
    double a, b;
    enum Operation operation;

    if (scanf("%19s %lf %lf", choice, &a, &b) != 3)
        return 1;

    if (strcmp(choice, "ADD") == 0)
        operation = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        operation = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        operation = MULTIPLY;
    else
        return 1;

    switch (operation) {
        case ADD:
            printf("%g\n", a + b);
            break;
        case SUBTRACT:
            printf("%g\n", a - b);
            break;
        case MULTIPLY:
            printf("%g\n", a * b);
            break;
    }

    return 0;
}