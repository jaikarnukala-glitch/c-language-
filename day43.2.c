#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    s[strcspn(s, "\n")] = '\0';

    int left = 0;
    int right = (int)strlen(s) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (s[left] != s[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    puts(is_palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}