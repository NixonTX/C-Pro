// call by value
/*Call by Value: The value of the actual parameter is passed to the formal parameter.
 Changes to the formal parameter do not affect the actual parameter.*/
 
#include <stdio.h>

// Function prototype
void square(int x);

int main() {
    int num = 5;
    
    printf("Before calling square function: %d\n", num);
    
    // Call by value
    square(num);

    printf("After calling square function: %d\n", num);

    return 0;
}

// Function definition
void square(int x) {
    x = x * x;
    printf("Inside square function: %d\n", x);
}
