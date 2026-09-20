#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}