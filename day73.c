#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *file = fopen("sample.txt", "r");
    int c, in_word = 0;
    int characters = 0, words = 0, lines = 0;
    int has_content = 0, last_char = '\0';

    if (file == NULL) {
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        characters++;
        has_content = 1;
        last_char = c;

        if (c == '\n') {
            lines++;
        }

        if (isspace((unsigned char)c)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    /* Count a final line even if it does not end with a newline. */
    if (has_content && last_char != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}