// writing in a file using fputs
#include<stdio.h>
 
int main(){
    FILE * fc;
    char str[10] = "Hello Dir";

    fc= fopen("abd.txt", "w");

    fputs(str,fc);

    return 0;
}