//String comparison with strcmp

    // 0 :- same
    // +ve :- first character that does not match, ASCII value is greater in string 1.
    // -ve :- when the first character that does not match, ASCII value is less in string 1.

#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Hello";
    char s2[] = "Hi";

    int value = strcmp(s1,s2);
    if(value == 0)
        printf("\nSame");
    else
        printf("\nNot Same");
    printf("\n%d",value);

    return 0;
}