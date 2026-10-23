#include <stdio.h>

int main(void) {
    char s[1000];
    char target;
    int count = 0;

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    if (scanf(" %c", &target) != 1) {
        return 0;
    }

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}