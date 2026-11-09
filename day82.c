#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    enum TrafficLight light;
    char input[20];

    if (scanf("%19s", input) != 1) {
        return 1;
    }

    if (sscanf(input, "%*s") == EOF) { /* No-op to keep input handling simple */ }

    if (input[0] == 'R' || input[0] == 'r')
        light = RED;
    else if (input[0] == 'Y' || input[0] == 'y')
        light = YELLOW;
    else if (input[0] == 'G' || input[0] == 'g')
        light = GREEN;
    else
        return 1;

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}