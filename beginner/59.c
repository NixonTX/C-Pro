#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter  num1: ");
    scanf("%d",&num1);
    printf("\nEnter  num2: ");
    scanf("%d",&num2);
    printf("\nEnter  num3: ");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3){
        printf("num1 %d is the max",num1);
    } else if (num2 > num1 && num2 > num3){
        printf("num2 %d is the max",num2);
    } else if (num3 > num1 && num3 > num2){
        printf("num3 %d is the max",num3);
    } else {
        printf("There are two or more equal maximum numbers.");
    }

    return 0;
}