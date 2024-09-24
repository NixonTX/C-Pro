#include<stdio.h>

char * show(){
    static char name[]= "Kissan";
    return name;
}

int main(){
    char * name;
    name = show();
    name[0] = 'M';
    printf("Your Name Is %s", name);

    return 0;
}