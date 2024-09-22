#include<stdio.h>
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    switch(a)
    {

        case 1 : printf("Hi 1");
        break;

        case 2 : printf("Hi 2");
        break;

        case 3 : printf("Hi 3");
        break;

        case 4 : printf("Hi 4");
        break;

        case 5 : printf("Hi 5");
        break;

        default : printf("It's default limo");
        break;

    }
    printf("\ngo to Hell");

    return 0;
}