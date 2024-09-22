#include<stdio.h>
void f(int *p, int m)
{
    m= m+5;     // 10 + 5 (j=10)
    *p= *p+m;   // ptr accessing value in i, 5 (5+15)
    return;
}

int main(){
    int i=5, j=10;
    f(&i, j);
    printf("%d",i+j);   // 20+10
    
    return 0;
}