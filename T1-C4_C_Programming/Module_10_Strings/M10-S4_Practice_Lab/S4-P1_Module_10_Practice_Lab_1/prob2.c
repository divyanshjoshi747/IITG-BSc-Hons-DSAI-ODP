#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    // Strip trailing newline from fgets if present
    if (end >= start && *end == '\n') {
        *end = '\0';
        end--;
    }

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(void) {
    char str[256];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        reverse_string(str);
        printf("Reversed string: %s\n", str);
    }
    return 0;
}