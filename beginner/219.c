// Append - a

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fa=NULL;
    char str[50];

    fa = fopen("appe.txt", "a");
    if(fa == NULL){
        printf("error");
        exit(1);
    }

    printf("Enter the content you wanna append: ");
    gets(str);

    fprintf(fa, "\n%s", str);
    //fputs(str, fa);

    printf("Successfully appended.");

    fclose(fa);

    return 0;
}