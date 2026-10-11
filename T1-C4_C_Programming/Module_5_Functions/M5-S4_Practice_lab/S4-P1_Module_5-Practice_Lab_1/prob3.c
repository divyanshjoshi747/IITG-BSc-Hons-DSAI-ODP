#include <stdio.h>

// Function to reverse the digits of a number
int reverseNumber(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return reversed;
}

// Function to check if a number is a palindrome
// Returns 1 if true, 0 if false
int isPalindrome(int n) {
    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (n < 0) {
        return 0;
    }
    
    // The number is a palindrome if it equals its reversed version
    if (n == reverseNumber(n)) {
        return 1;
    }
    
    return 0;
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    // Check if the number is a palindrome
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    
    return 0;
}
