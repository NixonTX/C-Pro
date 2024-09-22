// Return a string from a function
#include<stdio.h>

const char * display();
//char * display();

int main(){
    const char * str;
    str = display();
    //str[0] = 'B';
    printf("The string is: %s",str);
    //str[0] = 'K';
    //printf("The string is: %s",str);

    return 0;
}

const char * display(){
//char * display(){
    //static char str[]= "Jerry";
    //char * str= "Jerry";
    const char * str= "Jerry";
    //return "Jerry";
    return str;
}