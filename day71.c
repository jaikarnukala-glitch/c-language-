#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Name: ");
    if (scanf("%99s", name) != 1) {
        return 0;
    }

    printf("Age: ");
    if (scanf("%d", &age) != 1) {
        return 0;
    }

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        return 1;
    }

    fprintf(file, "Name: %s, Age: %d\n", name, age);
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}