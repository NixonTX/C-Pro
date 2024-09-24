#include<stdio.h>

int main(){
    int i, j;
    int space, row=5;

    for(i=1; i<=5; i++){
        for(space=1; space <=(row-i); space++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}