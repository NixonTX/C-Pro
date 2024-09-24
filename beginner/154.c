#include<stdio.h>

int main() {
    char ch1, ch2;

    // Read a character without handling whitespace
    printf("Enter the first character: ");
    scanf(" %c", &ch1);

    // Read a second character without handling whitespace
    printf("Enter the second character: ");
    scanf(" %c", &ch2);

    // Print the entered characters
    printf("You entered: %c and %c\n", ch1, ch2);

    return 0;
}
