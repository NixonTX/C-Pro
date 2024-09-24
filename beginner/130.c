// String Reverse without using strrev()
#include<stdio.h>
#include<string.h>
int main(){
    int n, i;
    char temp;
    char s1[20];
    printf("Enter the string s1: ");
    //scanf("%s",&s1);
    gets(s1);
    printf("\nThe string is %s",s1);
    //char s1[20] = "Rasagula";
    n = strlen(s1);

    for(i=0; i<n/2; i++)
    {
        temp = s1[i];
        s1[i] = s1[n-1-i];
        s1[n-1-i] = temp;
    }
    printf("\nThe reversed string is %s",s1);

    return 0;
}