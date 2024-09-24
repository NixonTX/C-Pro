#include <stdio.h>

int main(){
    int i, j;
    int row = 5;

    for(i=1; i<=5; i++){
        for(int space=1; space<=(row-i); space++){
            printf(" ");
        }
        for(j=1; j<= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}