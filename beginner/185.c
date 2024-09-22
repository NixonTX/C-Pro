// Function Pointer
#include<stdio.h>

int sum(int, int);

int main(){
    int s=0;
    // function pointer contains address of code (not a variable).
    int (*ptr)(int, int)=&sum;  /* ptr is a function pointer which accepts two arguments, both int type & return an int value. */

    s=(*ptr)(2, 3);
    printf("%d",s);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}