#include<stdio.h>

int main() {
    float pi = 3.14159;

    // Cast float to int
    int whole = (int)pi;

    printf("Original float: %f\n", pi);     // Outputs: 3.141590
    printf("After casting to int: %d\n", whole); // Outputs: 3

    return 0;
}