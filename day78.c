#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        perror("Could not open text.txt");
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        unsigned char c = (unsigned char)ch;

        if (isalpha(c)) {
            c = (unsigned char)tolower(c);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}