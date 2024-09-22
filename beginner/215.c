// writing in a file using fprintf
#include<stdio.h>
int main(){
    FILE * fn;
    char str[10] = "Howdy";
    int a= 8;

    fn= fopen("abdd.txt", "w");

    fprintf(fn,"%d %s", a, str);

    fclose(fn);

    return 0;
}