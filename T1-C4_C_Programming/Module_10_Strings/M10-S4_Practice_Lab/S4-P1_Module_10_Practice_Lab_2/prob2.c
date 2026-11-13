#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256];
    char ch;
    int found_index = -1;

    // 1. Take the string as input
    printf("Enter the string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // 2. Take the character to search as input
    printf("Enter the character: ");
    scanf(" %c", &ch);

    // 3. Iterate through the string to find the first occurrence
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found_index = i;
            break; // Stop at the first occurrence
        }
    }

    // 4. Print the result matching the sample output
    if (found_index != -1) {
        printf("Index of %c is %d\n", ch, found_index);
    } else {
        printf("Character %c is not present\n", ch);
    }

    return 0;
}