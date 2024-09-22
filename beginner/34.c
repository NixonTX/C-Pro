//Relational Operators (Comparison Ope): <, >, <=, >=m(first priority), ==, != 
#include<stdio.h>
int main(){
    int a =18, b=9, c, d, e=10;
    c=b++;
    d=b;

    printf("\n%d",a<b<c>d);     //relational expression. L to R
    printf("\n%d",b==e);
    printf("\n%d",c++ >e);
    printf("\n%d",a+c==b>e<c+d);

    return 0;
}

//If you demand higher precision it's sugested to avoid ==, != with float. (2.22 != 2.2)