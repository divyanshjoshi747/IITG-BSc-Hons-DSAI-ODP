#include <stdio.h>
#include <math.h>

typedef enum {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
} ShapeType;

typedef struct {
    ShapeType type;
    union {
        float radius;
        struct {
            float length;
            float breadth;
        } rect;
        struct {
            float a, b, c;
        } tri;
    } dim;
} Shape;

int main() {
    Shape s;
    int choice;
    float area = 0.0;

    printf("Which shape do you want to store - Circle(0), Rectangle(1) and Triangle(2)? ");
    scanf("%d", &choice);
    s.type = (ShapeType)choice;

    switch (s.type) {
        case CIRCLE:
            printf("Enter the radius of circle: ");
            scanf("%f", &s.dim.radius);
            area = 3.14159 * s.dim.radius * s.dim.radius;
            printf("Area is %.2f\n", area);
            break;

        case RECTANGLE:
            printf("Enter the dimensions of rectangle (length and breadth): ");
            scanf("%f %f", &s.dim.rect.length, &s.dim.rect.breadth);
            area = s.dim.rect.length * s.dim.rect.breadth;
            printf("Area is %.2f\n", area);
            break;

        case TRIANGLE:
            printf("Enter the three sides of triangle: ");
            scanf("%f %f %f", &s.dim.tri.a, &s.dim.tri.b, &s.dim.tri.c);
            // Heron's formula
            float semi = (s.dim.tri.a + s.dim.tri.b + s.dim.tri.c) / 2.0;
            area = sqrt(semi * (semi - s.dim.tri.a) * (semi - s.dim.tri.b) * (semi - s.dim.tri.c));
            printf("Area is %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}