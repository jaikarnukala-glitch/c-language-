#include <stdio.h>

int main(void) {
    char s[1000];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    printf("%s\n", s);
    return 0;
}