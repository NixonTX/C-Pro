//String concatenation (with function: strcat)
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]= "Tim ";
    char s2[7]="Cook";

    strcat(s1,s2);      //destination string, source string
    printf("%s",s1);

    return 0;
}