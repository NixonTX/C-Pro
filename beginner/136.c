// Pointers in c
#include<stdio.h>
int main(){
    int a=10, b=8;
    int *p, *q;
    p=&a;
    q=&b;
    
    printf("1.value of a: %d\n",a);
    printf("2.value of a: %d\n",*p);

    printf("3.value of pointer p: %p\n",p); //
    printf("4.address of a: %x\n",&a);
    printf("5.value of a: %p\n",&a);

    printf("6.address of a: %x\n",p);
    printf("7.address of p: %x\n",&p);

    return 0;
}