#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 0;
    }

    int length = (int)strcspn(sentence, "\n");

    for (int i = 0; i < length;) {
        if (sentence[i] == ' ' || sentence[i] == '\t') {
            putchar(sentence[i]);
            i++;
        } else {
            int start = i;

            while (i < length && sentence[i] != ' ' && sentence[i] != '\t') {
                i++;
            }

            for (int j = i - 1; j >= start; j--) {
                putchar(sentence[j]);
            }
        }
    }

    putchar('\n');
    return 0;
}