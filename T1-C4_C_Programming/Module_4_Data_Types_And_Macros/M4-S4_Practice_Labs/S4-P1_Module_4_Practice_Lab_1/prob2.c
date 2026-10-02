#include <stdio.h>
int main(void) {
  printf("Welcome to the program!\n");
  long num;
  while(1) {
    printf("Type a positive number and hit ENTER to proceed: ");
    scanf("%ld", &num);
    if (num >= 0) {
      printf("What do you want to do?\n");
      printf("1. Check if the entered number is prime.\n");
      printf("2. Check if the entered number is an Armstrong number.\n");
      printf("3. Exit.\n");
      int choice;
      printf("Type number corresponding your desired choice and hit ENTER: ");
      scanf("%d", &choice);
      if (choice == 1) {
        if (num==0 || num==1) {
          printf("The entered number %ld is not prime.\n", num);
        }
        else {
          int half = (num > 2) ? num/2 : 2;
          int isPrime = 1;
          for (int i = 2; i <= half; i++) {
            if (num == i) {
              continue;
            }
            if (num%i == 0) {
              printf("The entered number %ld is not prime.\n", num);
              isPrime=0;
              break;
            }
          }
          if (isPrime == 1) {
            printf("The entered number %ld is prime.\n", num);
          }
        }
      }
      else if (choice == 2) {
        int numdigit = 1;
        long rem = 0;
        long qout = num;
        long sum = 0;
        while (1) {
          if (qout < 10)
            break;
          qout = qout/10;
          numdigit++;
        }
        rem = num;
        for (int i = numdigit; i > 0; i--) {
          long mult = 1;
          for (int j = 1; j < i; j++) {
            mult = mult*10;
          }
          qout = rem/mult;
          rem = rem%mult;
          int power = 1;
          for (int j = 0; j < numdigit; j++) {
            power = power*qout;
          }
          sum+=power;
        }
        if (sum == num) {
          printf("The number %ld is an Armstrong number.\n", num);
        }
        else {
          printf("The number %ld is not an Armstrong number.\n", num);
        }
      }
      else if (choice == 3) {
        printf("Exiting...\n");
        break;
      }
      else {
        printf("Please enter a valid option between 1, 2 and 3!\n");
        continue;
      }
    }
    else {
      printf("Please enter a valid positive number!\n");
      continue;
    }
  }
}