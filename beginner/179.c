// Return a string from a function
// Readable and modify
#include<stdio.h>

char * display();

int main(){
    char *str;
    str=display();
    str[0] = 'm';
    printf("string is: %s",str);

    return 0;
}

char * display()
{
    static char str[] = "tom";
    return str;
}