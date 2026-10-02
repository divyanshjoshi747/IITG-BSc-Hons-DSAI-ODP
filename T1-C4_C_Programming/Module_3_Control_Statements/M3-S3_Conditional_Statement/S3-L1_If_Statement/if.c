#include <stdio.h>
int main(void) {
  int age;
  printf("Type your age and hit ENTER: ");
  scanf("%d", &age);
  if (age >= 18) {
    printf("You are eligible to vote!\n");
  }
  return 0;
}