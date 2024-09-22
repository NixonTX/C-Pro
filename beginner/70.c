//Multiplication table using For loop
#include<stdio.h>
int main()
{
    int num, i, a;

    printf("Enter a num: ");
    scanf("%d",&num);

    for (i=1; i<=10; i++) {
        a=num*i;
        //printf("\n%d",i);
        printf("\n%d",a);
    }
    return 0;
}