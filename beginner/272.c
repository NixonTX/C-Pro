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


    
    int k, l;
    int row2 = row;

    for(k=1; k<=row2; k++){
        for(int space2=1; space2<=(row2-k); space2++){
            printf(" ");
        }
        for(l=1; l<= 2*k-1; l++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}