// factorial using Recursion

#include<stdio.h>
int factorial(int q){
    int result= 1;

    if(q == 1 || q == 0)
    return result;

    result=q*(factorial(q-1));
    return result;
}

int main(){
    int a, f;

    printf("Give me the factorial of ");
    scanf("%d",&f);

    a=factorial(f);

    printf("factorial of %d is %d.", f, a);

    return 0;
}