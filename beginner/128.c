//String comparison without strcmp
#include<stdio.h>
//#include<string.h>
int main(){
    int flag=0, i;

    char s1[] = "Hello";
    char s2[] = "Hi";

    for(i=0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i]){
            flag=1;
            break;}
    }
    if(flag==1){
        printf("\nNot Same");}
    else{
        printf("\nSame");}

    return 0;
}