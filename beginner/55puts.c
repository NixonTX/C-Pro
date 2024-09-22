// puts()
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[20];
    //printf("Enter a character: ");
    puts("Enter a string:");
    gets(ch);
    //printf("\ncharacter is=%s",ch);
    puts(ch);   // don't need to put \n. It's already build in in puts().
    getch();

    return 0;
}