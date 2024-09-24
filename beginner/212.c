// File Handling // writing, if file does'nt exist it will create one., overwrite the current content.
// writing in a file using fputc
#include<stdio.h>

int main(){
    FILE *fp;
    char ch='A';

    fp= fopen("abc.txt","w");
    fputc(ch,fp);

    fclose(fp);

    return 0;
}