//Length of a string
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0, i=0;
    char name[30];

    printf("Enter name: ");
    gets(name);

    count=strlen(name);
    printf("The length of the String is %d",count);

    return 0;
}