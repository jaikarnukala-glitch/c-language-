#include <stdio.h>

int main(void) {
    char s[1000];
    int seen[26] = {0};

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';

            if (seen[index]) {
                printf("%c\n", s[i]);
                return 0;
            }

            seen[index] = 1;
        }
    }

    return 0;
}