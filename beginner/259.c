#include<stdio.h>
#define VOW(a) if ((a == 'a') || (a == 'e') ||  (a ==  'i') || (a == 'o')|| (a == 'u')) \
                    printf("%c is a vowel.", a); \
                    else \
                    printf("%c is not a vowel.", a);

int main(){
    char a;

    printf("Input a letter: ");
    scanf("%c", &a);

    VOW(a);

    return 0;
}