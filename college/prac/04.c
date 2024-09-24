// w a c p to add, sub, mul,div two no.s using user defined type function with return type.
#include<stdio.h>

int add();
int sub();
int mul();
int div();

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\naddition: %d", add(a, b));
    printf("\nsubtraction: %d", sub(a, b));
    printf("\nmultiplication: %d", mul(a, b));
    printf("\ndivision: %d", (div(a, b)));

    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}