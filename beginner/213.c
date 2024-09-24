#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){ 
    FILE *fl;
    char str[50];
    int i;

    fl= fopen("abcc.txt", "w");

    if(fl == NULL){
        printf("error.");
        exit(1);
    }
    
    printf("enter something: ");
    gets(str);

    fputs(str, fl);

    //for(i=0; i != strlen(str); i++);
    //fputc(str[i],fl);

    fclose(fl);

    return 0;
}