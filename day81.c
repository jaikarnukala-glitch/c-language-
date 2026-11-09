#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void)
{
    enum Day day;
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}