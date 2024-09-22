#include<stdio.h>
int main()
{
    int j=0, k=1;

    while(j<4)
    {
        //printf("\n");
        while(k<5)
        {
            printf("%d",k++);
        }    
        printf("\n");
    printf("%d",j++);             
    }
    
    return 0;
}