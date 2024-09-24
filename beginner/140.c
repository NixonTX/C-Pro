// Pointer Subtraction
#include<stdio.h>
int main(){
    int a[] = {0, 1, -1, 10, 11};
    int *p = &a[0];
    int *q = &a[3];

    //int d= q-p;     // distance btw q & p.
    //int d=p-q;
    q= q-2;     // moving 2 position backward.

    //printf("%d",d);
    printf("%d",q);     // address
    printf("\n%d",*q);    // value

    return 0;
}