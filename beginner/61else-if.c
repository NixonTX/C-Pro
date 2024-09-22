#include<stdio.h>
int main()
{
    int mark;
    printf("Enter mark: ");
    scanf("%d",&mark);

    if(mark > 90)
    printf("S");
    else if(mark > 80)
    printf("A");
    else if(mark > 70)
    printf("B");
    else if(mark > 60)
    printf("C");
    else if(mark > 40)
    printf("D");
    else if(mark > 30)
    printf("E");
    else
    printf("I'm sorry");

    return 0;
}