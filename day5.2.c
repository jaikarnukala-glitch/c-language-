#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}