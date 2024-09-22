/* Function calling: -Call by value, Call by reference
    Formal parameter- (parameters) -declaration & definition
    Actual parameter- (arguments) -calling*/

// Call by value
#include<stdio.h>

void fun(int , int);    // declaration

int main()  // calling
{
    int x=5, y=7;
    fun(x, y);      // x=5, y=7
    printf("\nx=%d y=%d", x, y);
    return 0;
}

void fun(int x, int y)  // definition
{
    x=7;
    y=5;
    printf("x=%d y=%d", x, y);      // x=7, y=5
}