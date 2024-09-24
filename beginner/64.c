#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your numeric grade(0-100) : ");
    scanf("%d",&grade);

    switch(grade/10)
    {
        case 10:
        case 9:
            printf("A");
            break;

        case 8:
        case 7:
            printf("B");
            break;

        case 6:
        case 5:
            printf("C");
            break;

        case 4:
        case 3:
            printf("D");
            break;

        default:
            printf("F");
            break;

    }
    return 0;
}