#include <stdio.h>
int sum(int);
int sum(int a) {
  static int add = 0;
  add+=a;
  return add;
}
int main(void) {
  int a = 0;
  while(a != EOF) {
  printf("Type a number and hit ENTER to add it to the previous sum: ");
  scanf("%d", &a);
  printf("%d\n", sum(a));
  }
}