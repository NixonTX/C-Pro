// Functions
#include<stdio.h>

void sum(){
    int a, b, sum=0;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a, &b);
    sum = a+b;
    printf("sum= %d",sum);
}

int main(){
    printf("Hi");
    sum();
    printf("\nHello");
    sum();

    return 0;
}