//increment or decrement operators(++ or --)
#include<stdio.h>
#include <stdlib.h>

int main()
{

    int a=10, b, c, d;
    printf("a is %d",a);
    b=++a;
    c=a++;
    d=++a;

    printf("\nNow a is %d",a);
    printf("\nb is %d",b);
    printf("\nc is %d",c);
    printf("\nd is %d",d);
    return 0;
}