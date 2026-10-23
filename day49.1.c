#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    int at_word_start = 1;

    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (isspace((unsigned char)name[i])) {
            at_word_start = 1;
        } else {
            if (at_word_start) {
                printf("%c.", name[i]);
                at_word_start = 0;
            }
        }
    }

    putchar('\n');
    return 0;
}