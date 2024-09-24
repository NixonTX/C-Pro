//String concatenation
#include<stdio.h>
#include<string.h>
int main(){
    int len1, len2, i;

    char s1[20]="Black";
    char s2[10]="Dread";

    len1=strlen(s1);
    len2=strlen(s2);

    for(i=0; i<=len2; i++){
        s1[len1+i]=s2[i]; }

    printf("%s",s1);

    int len3=strlen(s1);
    printf("\nlength of new str: %d", len3);

    return 0;
}