#include <stdio.h>

int main() {
    int lateDays, fine = 0;

    scanf("%d", &lateDays);

    if (lateDays > 30) {
        printf("Membership Cancelled");
    } else {
        if (lateDays <= 5) {
            fine = lateDays * 2;
        } else if (lateDays <= 10) {
            fine = (5 * 2) + ((lateDays - 5) * 4);
        } else {
            fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        }

        printf("Fine ₹%d", fine);
    }

    return 0;
}