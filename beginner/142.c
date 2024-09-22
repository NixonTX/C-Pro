// Pointer decrement
#include<stdio.h>
int main(){
    int a[] = {4, 8, 12, 16, 18, 32};
    int *p;
    p=&a[2];

    //printf("%d",*p--);      // post decrement
    //printf("\n%d",*p--);    // garbage value
    //printf("\n%d",*p--);
    //printf("\n%d",*--p);
    //printf("\n%d %d %d", *--p, *--p, *--p);

    //printf("\n%d",*(p--));
    //printf("\n%d",*--p);
    printf("\n%d",--(*p));


    return 0;
}