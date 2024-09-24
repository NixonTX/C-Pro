// Unions
// -shares same memory allocation
#include<stdio.h>

union abc
{
    int a;
    char b;
    float c;
};

int main(){
    union abc u;
    union abc *ptr = &u;

    u.a=1;
    u.b='G';
    //u.c=78.90;

    printf("a value : %d\n",ptr->a);        // garbage value
    printf("b value : %c\n",ptr->b);        // garbage value
    //printf("c value : %f",ptr->c);        // prints the exact value. In the last memory allocation the memory will be stored, previous will be overwritten.

    return 0;
}