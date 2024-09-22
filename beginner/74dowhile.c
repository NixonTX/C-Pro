#include<stdio.h>
int main()
{
    int i=0;

    do{
        printf("\nHey Limo");       //No matter what, this statement will be executed.
    }
    while(i>0);     //Must have the ;
    printf("\nOut of loop");

    return 0;
}