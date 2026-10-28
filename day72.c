#include <stdio.h>

int main(void) {
    FILE *file = fopen("info.txt", "r");
    char line[256];

    if (file == NULL) {
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}