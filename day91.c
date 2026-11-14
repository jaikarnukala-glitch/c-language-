#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student student;

    scanf("Name: %49[^\n]", student.name);
    scanf(" Roll: %d", &student.roll_no);
    scanf(" Marks: %d", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name, student.roll_no, student.marks);

    return 0;
}