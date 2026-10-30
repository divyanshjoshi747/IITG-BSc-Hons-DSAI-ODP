#include <stdio.h>

// Function prototypes
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);

int main(void) {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr1[size], arr2[size];

    printf("\n--- Input First Array ---\n");
    inputArray(arr1, size);

    printf("\n--- Input Second Array ---\n");
    inputArray(arr2, size);

    printf("\nBefore Swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    // Swap elements of both arrays
    swapArray(arr1, arr2, size);

    printf("\nAfter Swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    return 0;
}

// Function to read array input from user
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}

// Function to print array elements
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Function to swap contents of two arrays
void swapArray(int *sourceArr, int *destArr, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(sourceArr + i);
        *(sourceArr + i) = *(destArr + i);
        *(destArr + i) = temp;
    }
}