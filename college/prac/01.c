#include<stdio.h>

int main(){


char c;

printf("enter the character: ");
scanf("%c", &c);

switch(c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel.", c);
        break;

    default:
        printf("%c is a consonant.", c);
        break;
}

 return 0;
}