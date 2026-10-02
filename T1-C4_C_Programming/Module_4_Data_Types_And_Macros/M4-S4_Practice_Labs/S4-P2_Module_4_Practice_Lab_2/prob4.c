#include <stdio.h>
#include <math.h>

int main() {
    int iVal;
    float fVal;
    
    // Prediction variables
    int predType;
    float predVal;
    
    // Read input values
    printf("Enter an integer: ");
    scanf("%d", &iVal);
    
    printf("Enter a float: ");
    scanf("%f", &fVal);
    printf("\n");

    // --- Expression 1: int + float ---
    printf("Predict for: int + float\n");
    printf("Enter predicted type code (1=int, 2=float, 3=double): ");
    scanf("%d", &predType);
    
    printf("Enter predicted value: ");
    scanf("%f", &predVal);
    
    // In C standard arithmetic conversions, int + float produces a float (type code 2)
    int actualType1 = 2;
    float actualVal1 = iVal + fVal;
    
    printf("Actual type: %d (float), Actual value: %.4f -> ", actualType1, actualVal1);
    
    // Check match for type and value (using a small epsilon for float comparison)
    if (predType == actualType1 && fabs(predVal - actualVal1) < 0.0001f) {
        printf("MATCH\n\n");
    } else {
        printf("MISMATCH\n\n");
    }

    // --- Expression 2: int / float ---
    printf("Predict for: int / float\n");
    printf("Enter predicted type code (1=int, 2=float, 3=double): ");
    scanf("%d", &predType);
    
    printf("Enter predicted value: ");
    scanf("%f", &predVal);
    
    // In C standard arithmetic conversions, int / float produces a float (type code 2)
    int actualType2 = 2;
    float actualVal2 = iVal / fVal;
    
    printf("Actual type: %d (float), Actual value: %.4f -> ", actualType2, actualVal2);
    
    if (predType == actualType2 && fabs(predVal - actualVal2) < 0.0001f) {
        printf("MATCH\n");
    } else {
        printf("MISMATCH\n");
    }

    return 0;
}