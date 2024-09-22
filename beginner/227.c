// Count no. of characters in a file
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp= NULL;
    int count = 0; char ch;

    fp= fopen("abh.txt", "r");

    if(fp == NULL){
        printf("can't open it");
        exit(1);
    }

    while((ch=fgetc(fp)) != EOF){
            count++;
    }

    fclose(fp);

    printf("No of characters=%d", count);

    return 0;
}