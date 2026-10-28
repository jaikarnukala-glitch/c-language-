#include <stdio.h>

int main(void) {
    char source_name[256];
    char destination_name[256];
    int ch;

    if (scanf("%255s %255s", source_name, destination_name) != 2) {
        return 0;
    }

    FILE *source = fopen(source_name, "r");
    if (source == NULL) {
        return 1;
    }

    FILE *destination = fopen(destination_name, "w");
    if (destination == NULL) {
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destination_name);
    return 0;
}