#include <stdio.h>
int reverseNumber(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return reversed;
}

int main() {
    int number, result;
    
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    result = reverseNumber(number);
    
    printf("Reversed number: %d\n", result);
    
    return 0;
}
