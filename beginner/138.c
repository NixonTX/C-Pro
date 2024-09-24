// Pointer to pointer(Double pointer)
#include<stdio.h>
int main(){
/*
    // Pointer to variable
    int a=10;
    int *p=&a;

    printf("a= %d %d",a,*p);
*/

    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    //**q = 25;   // Accessing and changing 'a'.
    ***r = 50;

    //printf("a= %d %d %d %d %d",a,*p,**q,*q,q);
    printf("a= %d %d %d %d",a,*p,**q,***r);
    //printf("a= %d %d %d",a,*p,**q);

    return 0;
}