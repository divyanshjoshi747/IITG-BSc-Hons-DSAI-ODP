Observations on C Pointer Mutability:

1. Pointer to a floating point constant (const float \*fp):
   - Changing target address (fp = &b): Allowed.
   - Modifying value (*fp = 50.0f): Compiler Error (assignment of read-only location '*fp').

2. Constant pointer to a floating point variable (float \*const cfp):
   - Changing target address (cfp = &b): Compiler Error (assignment of read-only variable 'cfp').
   - Modifying value (\*cfp = 15.5f): Allowed.

3. Constant pointer to a floating point constant (const float \*const cptr):
   - Changing target address (cptr = &a): Compiler Error (assignment of read-only variable 'cptr').
   - Modifying value (*cptr = 40.0f): Compiler Error (assignment of read-only location '*cptr').
