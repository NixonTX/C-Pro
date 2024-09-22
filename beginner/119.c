#include<stdio.h>
int main(){
    char name[30];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("\n%.6s",name);
    printf("\n%10.6s\n",name);

    puts(name);
    printf("\n%s",&name[2]);
    return 0;
}