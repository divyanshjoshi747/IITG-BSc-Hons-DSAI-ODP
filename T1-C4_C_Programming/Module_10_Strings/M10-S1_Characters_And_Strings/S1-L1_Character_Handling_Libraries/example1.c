#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void count_words(const char *p) {
  int characters = 0;
  int words = 0;
  bool in_word = false;

  for (; *p != '\0'; p++) {
    if (isspace((unsigned char)*p)) {
      in_word = false;
    } else {
      characters++;
      if (!in_word) {
        words++;
        in_word = true;
      }
    }
  }

  if (characters == 0) {
    printf("You have entered no valid characters.\n");
  } else {
    printf("Number of words: %d, Number of characters: %d\n", words,
           characters);
  }
}

int main(void) {
  char str[256];

  printf("Enter a string: ");
  if (fgets(str, sizeof(str), stdin) != NULL) {
    count_words(str);
  }

  return 0;
}