#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    int starts[500], ends[500], words = 0;

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    int i = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        while (isspace((unsigned char)name[i])) {
            i++;
        }

        if (name[i] == '\0' || name[i] == '\n') {
            break;
        }

        starts[words] = i;

        while (name[i] != '\0' && name[i] != '\n' &&
               !isspace((unsigned char)name[i])) {
            i++;
        }

        ends[words] = i;
        words++;
    }

    if (words > 1) {
        for (int w = 0; w < words - 1; w++) {
            printf("%c.", name[starts[w]]);
        }
        putchar(' ');
    }

    if (words > 0) {
        for (int j = starts[words - 1]; j < ends[words - 1]; j++) {
            putchar(name[j]);
        }
    }

    putchar('\n');
    return 0;
}