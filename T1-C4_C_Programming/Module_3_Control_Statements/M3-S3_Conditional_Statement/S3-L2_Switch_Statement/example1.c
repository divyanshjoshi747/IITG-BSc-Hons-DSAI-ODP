#include <stdio.h>
int main(void) {
  int value;
  printf("Type a number and hit ENTER: ");
  scanf("%d", &value);
  switch (value) {
    case 1:
    printf("The corresponding day of the week is Sunday.");
    break;
    case 2:
    printf("The corresponding day of the week is Monday.");
    break;
    case 3:
    printf("The corresponding day of the week is Tuesday.");
    break;
    case 4:
    printf("The corresponding day of the week is Wednesday.");
    break;
    case 5:
    printf("The corresponding day of the week is Thursday.");
    break;
    case 6:
    printf("The corresponding day of the week is Friday.");
    break;
    case 7:
    printf("The corresponding day of the week is Saturday.");
    break;
    default:
    printf("Invalid input!");
    break;
  }
  printf("\n");
  return 0;
}