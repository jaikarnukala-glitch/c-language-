#include <stdio.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    char doubled[2000];

    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL) {
        return 0;
    }

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    size_t length = strlen(first);

    if (length != strlen(second)) {
        puts("Not rotation");
        return 0;
    }

    strcpy(doubled, first);
    strcat(doubled, first);

    puts(strstr(doubled, second) != NULL ? "Rotation" : "Not rotation");
    return 0;
}