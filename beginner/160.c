// call by reference
/*Call by Reference: The memory address of the actual parameter is passed to the formal parameter.
 Changes to the formal parameter directly affect the actual parameter.*/
 
#include <stdio.h>

// Function prototype
void squareByReference(int *x);

int main() {
    int num = 5;
    
    printf("Before calling squareByReference function: %d\n", num);
    
    // Call by reference
    squareByReference(&num);

    printf("After calling squareByReference function: %d\n", num);

    return 0;
}

// Function definition
void squareByReference(int *x) {
    *x = (*x) * (*x);
    printf("Inside squareByReference function: %d\n", *x);
}
