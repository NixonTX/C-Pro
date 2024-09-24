//Q&A
#include<stdio.h>

void f(int *p, int *q)
{
    p=q;
    *p=2;
}

int i=0, j=1;       // global variable- throughout the program.

int main(){
    f(&i, &j);
    printf("i=%d j=%d", i, j);
    //get char();

    return 0;
}