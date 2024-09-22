//printing a 2D array and calculating sum of elements
#include<stdio.h>
int main()
{
    int a[2][3], i, j, sum=0;

    printf("Enter the elements of the 2D array: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum + a[i][j];
        }
        printf("\n");
    }
    printf("sum = %d",sum);

    return 0;
}