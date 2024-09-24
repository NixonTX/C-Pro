// File Reading - using fgetc.         // If file doesn't exist, it will not create one.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=NULL;

    char ch;

    fp=fopen("abr.txt", "r");
    if(fp == NULL){
        printf("error");
        exit(1);
    }

    ch=fgetc(fp);
    printf("%c",ch);

    fclose(fp);

    return 0;
}