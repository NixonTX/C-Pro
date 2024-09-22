#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j;
    //for(i=1, j=0; i<5;i++)
    //for(i=0,j=0; i<5,j<3; i++)
    //for(i=1,j=0; i<5,j<3; i++,j++)  //always give weight to the second one in the condition- j<3
    //for(i=1,j=0; i==0; i++)
    //for(i=1,j=0; i==0; i++)
    //for(i=1,j=0; i<1 && j<3; i++,j++)
    //for(i=1,j=0; i<1 || j<3; i++,j++)
    //for(i=1,j=0; i<1, j<3; j++)
    //for(i=1; i<5; i=i/2)
    for(i=1; i<5; i=i*2)
    {
          printf("\n%d",i);
    //    printf("\n%d%d",i,j);
    //    i++;
    }
    return 0;
}