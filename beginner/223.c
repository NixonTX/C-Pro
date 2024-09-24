// fseek() function
// fseek(file pointer, offset, position);
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp= NULL;
    char ch;

    fp= fopen("abff.txt", "r+");
    if(fp == NULL){
        printf("file does't exist");
        exit(1);
    }

    fseek(fp, 6, SEEK_SET);     // beginning
    fputs("XXX",fp);
    /*ch= fgetc(fp);
    printf("%c",ch);
                            // After its done the cursor 'll be at the next position.
    fseek(fp, -4, SEEK_CUR);    // current position
    ch= fgetc(fp);
    printf("\n%c",ch);

    fseek(fp, -3, SEEK_END);    // End
    ch =fgetc(fp);
    printf("\n%c",ch);*/

    fclose(fp);

    return 0;
}