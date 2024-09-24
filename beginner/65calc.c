#include<stdio.h>
int main()
{
    int a, b, add, sub, mul, div;
    char operator;

    printf("Enter the Operator: ");
    scanf("%c",&operator);

    printf("Enter a & b: ");
    scanf("%d%d",&a,&b);

    switch (operator)
    {
    case '+':
        add=a+b;
        printf("add is %d",add);
        break;

    case '-':
        sub=a-b;
        printf("sub is %d",sub);
        break;

    case '*':
        mul=a*b;
        printf("mul is %d",mul);
        break;

    case '/':
        div=a/b;
        printf("div is %d",div);
        break;
    
    default:
        printf("check your operator");
        break;
    }
    return 0;
}