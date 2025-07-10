// void
#include<stdio.h>

// Function return type - void
// This function does not return any value, it just prints "Hello!" to the console.
void greet() {
    printf("Hello!");
}

void* ptr; // generic pointer, can point to any data type

int main() {

    // cast it before dereferencing
    int x = 10;
    void* ptr = &x;
    // printf("address of x: %d\n", ptr);  // %p
    // printf("%d\n", (int*)ptr);
    printf("%d\n", *(int*)ptr);

    // greet();
    return 0;
}