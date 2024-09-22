#include<stdio.h>
int main()
{
    int i=0;
    char ch='a';
    while(ch<127 && i==0) {
        printf("\n%d",ch);
        ch--;
    }
    printf("\nEND");
    return 0;
}