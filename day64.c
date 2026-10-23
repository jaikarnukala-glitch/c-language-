#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10000];
    int last_seen[256];

    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    int length = (int)strcspn(s, "\n");
    int start = 0;
    int max_length = 0;

    for (int i = 0; i < length; i++) {
        unsigned char c = (unsigned char)s[i];

        if (last_seen[c] >= start) {
            start = last_seen[c] + 1;
        }

        last_seen[c] = i;

        int current_length = i - start + 1;
        if (current_length > max_length) {
            max_length = current_length;
        }
    }

    printf("%d\n", max_length);
    return 0;
}