#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        fclose(input);
        return 1;
    }

    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper((unsigned char)ch), output);
    }

    fclose(input);
    fclose(output);
    return 0;
}