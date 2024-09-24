#include<stdio.h>

//void modify(char [], char[]);
void modify(char *, char *);

int main(){
    char str1[] = "Maha";
    char str2[] = "vishnu";

    modify(str1,str2);

    return 0;
}

//void modify(char str1[], char str2[])
void modify(char *str1, char *str2)
{
    int i, length=0;
    for(i=0; str1[i] != '\0'; i++){
        length= length+1;
    }
    printf("length of I'st string is: %d\n",length);
    str2[0] = 'V';
    printf("%s %s", str1, str2);
}