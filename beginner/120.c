//Length of a string
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0, i=0;
    char name[30];

    printf("Enter name: ");
    gets(name);

    while(name[i] != '\0')
        {
            count++;
            i++;
        }
    printf("The length of the String is %d",count);

    return 0;
}