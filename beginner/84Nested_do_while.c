#include<stdio.h>
int main()
{
    int i=1, j=3;

    do{
        do{
            printf("%d",j);
            j--;
        }
        while(j>0);     //Here it breaks
        i++;
        printf("%d",i);
    } while (i<4);
    return 0;    
}