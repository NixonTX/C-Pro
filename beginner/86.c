#include<stdio.h>
int main()
{
    int i=4, j=0;

    do{
        do{
            printf("%d",i--);
           // i--;
        } while(i>=0);
        printf("\n");
        j++;
        printf("%d",j);
    }while(j<=5);

    return 0;
}