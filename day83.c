#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void)
{
    char input[10];
    if (scanf("%9s", input) != 1)
        return 1;

    const char *names[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < 12; i++) {
        if (strcmp(input, names[i]) == 0) {
            if (i == FEB)
                printf("28 or 29 days\n");
            else
                printf("%d days\n", days[i]);
            return 0;
        }
    }

    return 1;  /* Invalid month */
}