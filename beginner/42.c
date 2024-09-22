// Bitwise NOT
#include<stdio.h>
int main(){
    int a=5, b, c=50;
    b=~a;
    printf("\n%d",b);   //shortcut ~a= -(a+1)   here -(5+1)=-6
    printf("\n%d", ~c); //~c= -(50+1)= -51
    printf("\n%d",6<<4);

    return 0;
}