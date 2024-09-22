//upper to lower case using strlwr()
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "SidneyTTT";
    strlwr(s1);
    printf("%s",s1);

    return 0;
}