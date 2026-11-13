#include <stdio.h>
#include <string.h>

void is_palindrome(char *str) {
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left < right) {
        if (*left != *right) {
            printf("\"%s\" is NOT a palindrome.\n", str);
            return;
        }
        left++;
        right--;
    }
    printf("\"%s\" is a palindrome.\n", str);
}

int main(void) {
    char str[256];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0'; // Remove trailing newline
        is_palindrome(str);
    }
    return 0;
}