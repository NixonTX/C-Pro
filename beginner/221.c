// w+ mode - Reading & Writing; If file doesn't exist it will create one.
// File exist, then errase the previous content.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=NULL;
    char str[50];
    char ch;

    fp= fopen("abee.txt", "w+");

    if(fp == NULL){
        printf("can't open the file.");
        exit(1);
    }

    fputs("Malaysia", fp);

    rewind(fp);
    while(!feof(fp)){
        //ch = fgetc(fp);
        //printf("%c", ch);
        fgets(str, 20, fp);
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}