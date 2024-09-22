// Call back Function     // Passing function to a function
#include<stdio.h>

void sum(int a, int b)
{
    printf("sum=%d\n", a+b);
}

void sub(int a, int b)
{
    printf("sub=%d", a-b);
}
// All function should be of same type.
void display(void(*fptr)(int, int))
{
    (*fptr)(5,1);
}

int main(){
    display(sum);
    display(sub);
}