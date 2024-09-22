// r+ mode - for modifying an existing file. If file doesn't exist it wont create one.
// Reading & Writing; wont errase the previous content.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * ff=NULL;
    char str[50];

    ff= fopen("abc.txt", "r+");
    
    if(ff == NULL){
        printf("error");
        exit(1);
    }

    fseek(ff, 0, SEEK_SET);
    while(fgets(str, sizeof(str), ff) != NULL){
        printf("Original Contant: %s", str);
    }

    fseek(ff, 0, SEEK_SET);         // moves the file position indicator to the beginning of the file (SEEK_SET).
    fputc('z',ff);
    fputs("Hi Milly, Hi Mikky", ff);
    fputc('L',ff);
    fgets(str, 5, ff);

    fseek(ff, 0, SEEK_SET);
    while(fgets(str, sizeof(str), ff) != NULL){
        printf("\nModified Content: %s", str);
    }

    printf("\nModified successfully");

    fclose(ff);

    return 0;
}