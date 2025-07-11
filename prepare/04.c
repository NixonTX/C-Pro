// XNOR
/*

XNOR Truth Table:

A	B	A XNOR B
0	0	1
0	1	0
1	0	0
1	1	1

*/
// XNOR can be implemented using the bitwise XOR (^) and bitwise NOT (~) operators.
// A XNOR B = ~(A ^ B)

#include <stdio.h>
int main() {
    unsigned int a= 5;  // Binary: 0101  
    unsigned int b = 3; // Binary: 0011

    unsigned int xnor = ~(a ^ b); // XNOR operation
    printf("A XNOR B: %u\n", xnor);
    printf("A XNOR B (4-bit): %u\n", xnor & 0x0F); // Masking to 4 bits

    return 0;
}