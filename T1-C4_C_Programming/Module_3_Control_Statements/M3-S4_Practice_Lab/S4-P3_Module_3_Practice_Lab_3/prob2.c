#include <stdio.h>

int main() {
    int num, temp, remainder, numDigits = 0;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Step 1: Count total number of digits
    temp = num;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    // Step 2: Calculate sum of digits raised to the power of total digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        // Compute remainder^numDigits manually using a loop
        int term = 1;
        for (int i = 0; i < numDigits; i++) {
            term *= remainder;
        }

        sum += term;
        temp /= 10;
    }

    // Step 3: Check condition
    if (sum == num) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}