#include<stdio.h>

void display()
{
    extern int x;

    x ++;
    printf("Hello from 249A");
    printf("\nx = %d", x);
}