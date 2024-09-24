// passing string as an array to a function
#include<stdio.h>

void display(char[]);

int main(){
    char str[] = "Param";
    display(str);

    return 0;
}

void display(char str[]){
    printf("string is %s", str);
}