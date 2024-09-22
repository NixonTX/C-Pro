#include<stdio.h>

int print(int a)
{
    if(a < 1) return a;
    else
    return 1+ print(a/2);       // Non-tail recursion. Bcz +1 to do after recursive call.
}

int main(){
    int x;
    x = print(10);
    printf("%d",x);

    return 0;
}