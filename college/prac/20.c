// Printing a string using an Array
#include<stdio.h>

int main(){
    char str[] = "Heaven Or Hell";

    for(int i=0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    return 0;
}
