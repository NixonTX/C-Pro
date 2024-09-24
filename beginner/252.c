#include<stdio.h>

int i=5;

int main(){
    extern int j;

    printf("%d %d", i, j);      // will give linker error.

    int j=10;

    return 0;
}