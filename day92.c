#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        scanf(" Name: %49[^\n]", students[i].name);
        scanf(" Roll: %d", &students[i].roll_no);
        scanf(" Marks: %d", &students[i].marks);
    }

    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}