//upper to lower without using function
#include<stdio.h>
int main(){
    char s[20];
    int i;

    printf("Enter the string: ");
    gets(s);

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+32;         //upper value ASCII + 32 = lower value ASCII
        }
    }
    printf("In lower: %s",s);

    return 0;
}