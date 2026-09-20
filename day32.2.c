#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};
    int maxCount = 0, result;

    scanf("%s", num);

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            count[num[i] - '0']++;
        }
    }

    /* In case of a tie, print the smallest digit */
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}