#include <stdio.h>

int main(void)
{
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Could not open students.txt");
        return 1;
    }

    int count;
    printf("Enter number of students: ");
    if (scanf("%d", &count) != 1 || count < 0) {
        fprintf(stderr, "Invalid number of students.\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < count; i++) {
        char name[50];
        int roll;
        float marks;

        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        if (scanf("%49s %d %f", name, &roll, &marks) != 3) {
            fprintf(stderr, "Invalid student record.\n");
            fclose(file);
            return 1;
        }

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Could not read students.txt");
        return 1;
    }

    char name[50];
    int roll;
    float marks;

    while (fscanf(file, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}