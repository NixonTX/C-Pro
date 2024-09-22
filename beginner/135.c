//lower to upper without using function
#include<stdio.h>
int main(){
    char s[20];
    int i;

    printf("Enter the string: ");
    gets(s);

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i]-32;         // lower value ASCII - 32 = upper value ASCII
        }
    }
    printf("In upper: %s",s);

    return 0;
}