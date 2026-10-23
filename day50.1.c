#include <stdio.h>

int main(void) {
    int day, month, year;

    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        return 0;
    }

    if (month == 4) {
        printf("%02d-Apr-%04d\n", day, year);
    }

    return 0;
}