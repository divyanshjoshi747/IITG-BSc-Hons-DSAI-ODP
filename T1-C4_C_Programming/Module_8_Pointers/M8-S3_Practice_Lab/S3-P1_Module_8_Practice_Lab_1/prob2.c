#include <stdio.h>

// Function prototype
void swap(int *p, int *q);

int main(void) {
    int x, y;

    printf("Enter first integer: ");
    scanf("%d", &x);

    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Calling swap with memory addresses
    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Swap implementation using pointers
void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}