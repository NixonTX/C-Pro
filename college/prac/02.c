// A no. is Amstrong or not?
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, digit, n = 0, result = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;              // originalNum = originalNum / 10;
        ++n;
    }

    originalNum = num;

    // Check if the number is Armstrong
    while (originalNum != 0) {
        digit = originalNum % 10;
        result += pow(digit, n);
        originalNum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
