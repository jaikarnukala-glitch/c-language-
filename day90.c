#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[20];
    struct Person person;

    if (scanf("Gender=%19s", input) != 1) {
        return 1;
    }

    if (strcmp(input, "MALE") == 0) {
        person.gender = MALE;
        printf("Male\n");
    } else if (strcmp(input, "FEMALE") == 0) {
        person.gender = FEMALE;
        printf("Female\n");
    }

    return 0;
}