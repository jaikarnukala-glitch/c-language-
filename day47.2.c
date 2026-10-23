#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];
    char longest[1000] = "";

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 0;
    }

    int i = 0;
    while (sentence[i] != '\0') {
        while (sentence[i] == ' ' || sentence[i] == '\t' ||
               sentence[i] == '\n') {
            i++;
        }

        int start = i;
        while (sentence[i] != '\0' && sentence[i] != ' ' &&
               sentence[i] != '\t' && sentence[i] != '\n') {
            i++;
        }

        int length = i - start;
        if (length > (int)strlen(longest)) {
            strncpy(longest, sentence + start, length);
            longest[length] = '\0';
        }
    }

    puts(longest);
    return 0;
}