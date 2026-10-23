#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    s[strcspn(s, "\n")] = '\0';

    int length = (int)strlen(s);
    for (int i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');

    return 0;
}