// Types of Functions
// No Argument No return value.
#include<stdio.h>
void sum(void);

int main(){
    sum();

    return 0;
}

void sum(){
    int a=5, b=7, sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}