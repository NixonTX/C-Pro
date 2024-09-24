//lower to upper case using strupr()
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "sIDNEYttt";
    strupr(s1);
    printf("%s",s1);

    return 0;
}