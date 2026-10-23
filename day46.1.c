#include <stdio.h>

int main(void) {
    char s[1000];
    int write = 0;

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    for (int read = 0; s[read] != '\0' && s[read] != '\n'; read++) {
        char c = s[read];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            s[write++] = c;
        }
    }

    s[write] = '\0';
    printf("%s\n", s);
    return 0;
}