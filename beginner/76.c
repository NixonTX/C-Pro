//break in while loop
#include<stdio.h>
int main()
{
    int a, sum=0;
    while(1)
    {
        printf("Enter a num: ");
        scanf("%d",&a);

        if (a<0) 
        break;

        sum=sum+a;
    }
    printf("%d",sum);
}