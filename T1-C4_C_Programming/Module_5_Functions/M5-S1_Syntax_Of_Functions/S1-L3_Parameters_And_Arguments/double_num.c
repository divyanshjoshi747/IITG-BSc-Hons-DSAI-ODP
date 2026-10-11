#include <stdio.h>
int double_num(int);
int double_num(int num) {
  int num_2x = 2 * num;
  return num_2x;
}
int main(void) {
  int number;
  printf("Type a number of your choice and hit ENTER to double it: ");
  scanf("%d", &number);
  printf("The double number of the number %d entered by you is %d, whereas the original number still remains %d.\n", number, double_num(number), number);
}