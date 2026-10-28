#include <stdio.h>

int main(void) {
    char filename[256];
    char line[256];

    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}