// Register storage class
/* ~ If you want to store some 'Local variable' into CPU register.
    ~ Register memory is very less so we can't store all the variables.
    ~ Stored in CPU register.
    ~ Faster access, Decrease Running time, Increase Efficiency.
    ~ We cannot get the address of a register variable with the help of pointer. */

#include<stdio.h>

int main(){
    register int i, sum=0;

    for(i=0; i<10; i++)
    sum=sum+i;
    printf("%d", sum);

    return 0;
}