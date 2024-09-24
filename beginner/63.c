#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the ch: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("VOWEL");
        break;
    
    default:
    printf("Not a Vowel");
        break;
    }
    return 0;
}