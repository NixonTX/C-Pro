#include<stdio.h>
char fun();

int main(){
    char ch;
    ch = fun();
    printf("ch=%c",ch);
    return 0;
}

char fun(){
    char c;
    printf("enter a character: ");
    scanf(" %c", &c);
    return c;
}