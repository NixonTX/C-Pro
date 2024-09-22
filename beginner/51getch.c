//getch -Immediately executes the next line. Used to read a single character from the console.used for security purposes like passwor
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    ch=getch(); 
    printf("ch:%c",ch);

    return 0;
}