#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int capitalize_next = 1;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        unsigned char c = (unsigned char)str[i];

        if (isspace(c)) {
            capitalize_next = 1;
        } else if (capitalize_next) {
            str[i] = (char)toupper(c);
            capitalize_next = 0;
        } else {
            str[i] = (char)tolower(c);
        }
    }

    printf("%s", str);
    return 0;
}