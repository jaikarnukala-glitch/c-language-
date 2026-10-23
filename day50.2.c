#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    s[strcspn(s, "\n")] = '\0';

    int n = (int)strlen(s);
    int first = 1;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            if (!first) {
                printf(",");
            }

            for (int i = start; i <= end; i++) {
                putchar(s[i]);
            }

            first = 0;
        }
    }

    putchar('\n');
    return 0;
}