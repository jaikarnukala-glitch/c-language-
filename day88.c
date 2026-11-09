#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int value = RED; value <= GREEN; value++) {
        printf("%s=%d\n", names[value], value);
    }

    return 0;
}