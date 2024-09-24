#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp=NULL;

    char str[50];
    int i;
    fp=fopen("abe.txt", "w");

    if(fp == NULL){
        printf("error");
        exit(1);
    }

    printf("enter the string: ");
    gets(str);

    for(i=0; i != strlen(str); i++)
    fputc(str[i],fp);

    fclose(fp);

    return 0;
}