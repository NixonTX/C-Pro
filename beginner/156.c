// Call by reference    (reference means address)
#include<stdio.h>

void fun(int* , int*);    // declaration

int main()  // calling
{
    int x=5, y=7;
    fun(&x, &y);      
    printf("\nx=%d y=%d", x, y);
    return 0;
}

void fun(int *x, int *y)  // definition
{
    *x=7;
    *y=5;
    printf("x=%d y=%d", *x, *y);
}