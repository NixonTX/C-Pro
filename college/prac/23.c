#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *p=&a;
    int *q=&b;

    printf("\n%d", *p);
    printf("\n%d", *q);

    printf("\nsum of a & b is %d", *p + *q);

    return 0;
}