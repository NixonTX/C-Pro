#include <stdio.h>

int main() {
    int i = 0;
    do {
        // Empty body
    } while (i++ < 5);      // i increments to 6 before exiting the loop - post increment
    printf("i = %d\n", i);
    return 0;
} // prints 6