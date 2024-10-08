#include<stdio.h>
int main(){
    int a=10, b=6;
    printf("\nBitwise NOT %d",~a); // -(a+1)
    printf("\n%d",a&b && b+1 ||0);

    return 0;

}