// Ternary Operator
/* 
condition ? expression_if_true : expression_if_false
*/

#include <stdio.h>
int main() {
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    printf("The maximum value is: %d\n", max);

    // Nested Ternary Operator
    int x = 0;
    printf("Result: %s\n", (x > 0) ? "Positive" : (x < 0) ? "Negative" : "Zero");
    return 0;
}