// rewind() - To move the file pointer from any position in the file to the beginning.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp= NULL;
    char ch;

    fp = fopen("abgg.txt", "r+");

    if(fp == NULL){
        printf("can't open the file");
        exit(1);
    }

    fseek(fp, 6, SEEK_SET);

    rewind(fp);

    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c\n", ch);
    }

    fclose(fp);

    return 0;
}