#include<stdio.h>

int a, b, c=0;

void pf(void);

int main(){
    //static int a=1;
    auto int a=1;

    pf();

    a+=1;

    pf();

    printf("\n%d %d", a, b);

    return 0;
}

void pf(void)
{
    //static int a=2;
    register int a=2;

    int b=1;
    a+= ++b;

    printf("\n%d %d", a, b);
}