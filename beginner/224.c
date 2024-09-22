// ftell() function - Tell the position of file pointer with respect to starting of the file.
// also can find length of the file.

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE * fp= NULL;
    char ch;    int pos;
    char str[50];

    fp= fopen("abg.txt", "r");

    if(fp == NULL){
        printf("can't open file");
        exit(1);
    }

    pos = ftell(fp);
    printf("%d", pos);

    fseek(fp, 2, SEEK_SET);
    printf("\n%d", ftell(fp));

    ch= fgetc(fp);
    printf("\n%c", ch);
    printf("\n%d", ftell(fp));

    fseek(fp, 0, SEEK_END);             // Finding length 
    printf("\nLength of the file: %d", ftell(fp));

    fclose(fp);

    return 0;
}