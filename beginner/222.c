// a+ mode
// For Reading & appending; If the file doesn't exist it will create one.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp=NULL;
    char ch;
    char str[50];

    fp = fopen("abf.txt", "a+");
    if(fp == NULL){
        printf("file does't exist");
        exit(1);
    }

    printf("Enter string: ");
    gets(str);
    fputs(str, fp);
    //fputs("HaLaeLuoYeah..", fp);

    rewind(fp);
    while(!feof(fp)){
        //ch = fgetc(fp);
        fgets(str, 10, fp);
        printf("%s", str);
    }

    fclose(fp);

    return 0;

}