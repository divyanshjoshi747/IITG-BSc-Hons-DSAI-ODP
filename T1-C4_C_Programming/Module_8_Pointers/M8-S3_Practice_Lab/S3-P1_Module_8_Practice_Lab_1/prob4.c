#include <stdio.h>

// Function prototype
float *findMax(float A[], int size);

int main(void) {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    float arr[n];
    printf("Enter %d float numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Call findMax which returns a pointer to the max element
    float *maxPtr = findMax(arr, n);

    if (maxPtr != NULL) {
        printf("The maximum element is: %.2f\n", *maxPtr);
    }

    return 0;
}

// Function definition returning pointer to the maximum float element
float *findMax(float A[], int size) {
    if (size <= 0) return NULL;

    float *max_ptr = &A[0];

    for (int i = 1; i < size; i++) {
        if (A[i] > *max_ptr) {
            max_ptr = &A[i];
        }
    }

    return max_ptr;
}