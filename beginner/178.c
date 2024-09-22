// Return a string from a function
// Read only, cannot modify
#include<stdio.h>

char * display();

int main(){
    char *str;
    str=display();
    //str[0] = 'm';
    printf("string is: %s",str);

    return 0;
}

char * display()
{
    char * str="tom";
    return str;
    //return "tom";
}