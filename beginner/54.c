//Unformated output functions- putchar(), putch(), puts()
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    //printf("\ncharacter is %c",ch);
    //putchar(ch);  //defining stdio.h
    putch(ch);  //same as putchar() except defining conio.h
    getch();

    return 0;
}