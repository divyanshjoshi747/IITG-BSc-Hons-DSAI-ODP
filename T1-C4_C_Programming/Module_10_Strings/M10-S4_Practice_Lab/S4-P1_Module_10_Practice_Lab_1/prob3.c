#include <stdio.h>
#include <string.h>

int position(char *str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            printf("Position: %d\n", i + 1);
            return i + 1; // 1-based position
        }
    }
    printf("Character '%c' not found.\n", c);
    return -1;
}

int main(void) {
    char str[256], c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    printf("Enter character to search: ");
    scanf(" %c", &c);

    position(str, c);
    return 0;
}