#include <stdio.h>
#include <math.h>

// Function prototype
void area_peri(float x, float y, float z, float *s, float *p);

int main(void) {
    float a, b, c;
    float area, perimeter;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for valid triangle sides (triangle inequality theorem)
    if (a + b > c && a + c > b && b + c > a) {
        area_peri(a, b, c, &area, &perimeter);
        printf("Perimeter of the triangle: %.2f\n", perimeter);
        printf("Area of the triangle: %.2f\n", area);
    } else {
        printf("Invalid triangle: The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}

// Function definition
void area_peri(float x, float y, float z, float *s, float *p) {
    *p = x + y + z;                     // Calculate perimeter
    float semi_p = *p / 2.0f;            // Semi-perimeter for Heron's formula
    *s = sqrtf(semi_p * (semi_p - x) * (semi_p - y) * (semi_p - z)); // Calculate area
}