#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    // Base case: Any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive case: base^exponent = base * base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and display the result
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
