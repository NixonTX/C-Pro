#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age>25 && age<30)
    {
        printf("\nage=%d", age);
        printf("\nCoffee with me");
    }
    else
    {
        printf("age=%d", age);
        printf("\nGo Home");
    }
    printf("\nOut of if-else");

    return 0;
}