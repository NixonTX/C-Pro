#include <stdio.h>

int main(){
    int i, j, space, row;

    printf("Enter the no. of rows: ");
    scanf("%d", &row);
    

    for(i=row; i>=1; i--){
        for(space=1; space<=(row-i); space++){
            printf(" ");
        }
        for(j=1; j<= 2*i -1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}