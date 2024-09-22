#include<stdio.h>

char * display(){
    char * name= "Nameen";
    return name;
}

int main(){
    char * name;
    name=display();
    printf("Your name is %s",name);

    return 0;
}