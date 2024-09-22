// copy content of one file into another file
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr1= NULL, *fptr2= NULL;
    char c, ch;

    fptr1= fopen("abi.txt", "r");
    if(fptr1 == NULL){
        printf("error opening this file.");
        exit(1);
    }

    fptr2= fopen("abicpy.txt", "w+");
    if(fptr1 == NULL){
        printf("error opening this file.");
        exit(1);
    }

    while((c=fgetc(fptr1)) != EOF){
        fputc(c, fptr2);
    }

    printf("file successfully copied.");

    rewind(fptr2);

    printf("\nReading the copied contents:\n");

    while(!feof(fptr2)){
        ch= fgetc(fptr2);
        printf("%c", ch);
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}