#include<stdio.h>

void display(char str[], char str2[]){
    printf("\nEnter first string: ");
    scanf(" %s",str);

    printf("Enter second name: ");
    scanf(" %s",str2);

    printf("The Strings Are: %s %s", str,str2);
}

int main(){
    //char str[] = "masuchuz";
    char fname[30];
    char lname[30];
    printf("The details are as follows-\n");
    display(fname, lname);
    display(fname, lname);

    return 0;
}