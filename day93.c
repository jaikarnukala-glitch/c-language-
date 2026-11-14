#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[3];
    int topper = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%49s %d %d",
              students[i].name,
              &students[i].roll_no,
              &students[i].marks);

        if (students[i].marks > students[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           students[topper].name,
           students[topper].marks);

    return 0;
}