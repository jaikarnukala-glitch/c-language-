#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;

    scanf("%s", binary);

    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }

        i++;
    }

    printf("%s", binary);

    return 0;
}