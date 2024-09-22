// Count no. of lines in a file
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp= NULL;
    int count = 1; char ch;

    fp= fopen("abh.txt", "r");

    if(fp == NULL){
        printf("can't open it");
        exit(1);
    }

    while((ch=fgetc(fp)) != EOF){
        if(ch == '\n'){
            count++;
        }
    }

    fclose(fp);

    printf("No of lines=%d", count);

    return 0;
}