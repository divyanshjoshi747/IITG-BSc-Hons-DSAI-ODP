#include <stdio.h>

int main(void) {
    float a = 10.5f;
    float b = 20.5f;
    const float c = 30.5f;

    // a. Pointer to a floating point constant
    const float *fp = &c;
    
    // Test cases for fp:
    fp = &b;             // ALLOWED: Changing the address it points to.
    // *fp = 50.0f;      // COMPILER ERROR: Cannot modify value through pointer to constant.

    // b. Constant pointer to a floating point variable
    float *const cfp = &a;

    // Test cases for cfp:
    *cfp = 15.5f;        // ALLOWED: Modifying value pointed to.
    // cfp = &b;         // COMPILER ERROR: Cannot point to a different address.

    // c. Constant pointer to a floating point constant
    const float *const cptr = &c;

    // Test cases for cptr:
    // cptr = &a;        // COMPILER ERROR: Cannot point to a different address.
    // *cptr = 40.0f;    // COMPILER ERROR: Cannot modify value pointed to.

    printf("Program finished successfully.\n");
    return 0;
}