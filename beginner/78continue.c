//continue in for loop
#include<stdio.h>
int main()
{
    int a, i, sum=0;
    for (i=1; i<=5; i++) {
        printf("Enter a num: ");
        scanf("%d",&a);

        // if (a<10) 
        if (a<0)
        {
        continue;       //continue will skip the following
    }
    sum=sum+a;          // In this case this will be skipped when continue occurs.
    }
    printf("%d",sum);
}