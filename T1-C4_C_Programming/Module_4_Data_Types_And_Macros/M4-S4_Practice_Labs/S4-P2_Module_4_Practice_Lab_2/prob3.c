#include <stdio.h>
#define swap(a, b) int temp = a; a = b, b = temp;
int main(void) {
  printf("Type two numbers and hit ENTER to swap them.\n");
  printf("First number: ");
  int num1;
  scanf("%d", &num1);
  int num2;
  printf("Second number: ");
  scanf("%d", &num2);
  swap(num1, num2);
  printf("The numbers have been swapped to the first number being %d and second number being %d.\n", num1, num2);
}