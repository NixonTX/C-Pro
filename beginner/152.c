// Function Declaration
#include<stdio.h>
float sum(void);         // function declaration

int main(){
    sum();      // function calling

    return 0;
}

float sum(){         // function definition
    float a, b, sum=0;
    printf("Enter two numbers: ");
    scanf("%f %f",&a, &b);
    sum = a+b;
    printf("sum= %f",sum);
}
