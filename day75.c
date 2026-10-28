#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256];
    char text[1000];

    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    /* Consume the newline after the filename. */
    getchar();

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        return 1;
    }

    fputs(text, file);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}