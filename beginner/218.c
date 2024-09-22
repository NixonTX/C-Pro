// File Reading - using fgets         // If file doesn't exist, it will not create one.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=NULL;

    char str[10];

    fp=fopen("abrr.txt", "r");
    if(fp == NULL){
        printf("error");
        exit(1);
    }

    while(!feof(fp))        // feof - file end of file.
    { 
    fgets(str, 3, fp);
    printf("%s", str);
    }
    fclose(fp);

    return 0;
}