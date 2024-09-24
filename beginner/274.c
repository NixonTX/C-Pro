// fun stuff

#include<stdio.h>

int main(){
    int i, space, j, row, l, p;
     
    printf("enter how long you want it: ");
    scanf("%d", &l);

    printf("enter no. of rows: ");
    scanf("%d", &row);

    for(p=0; p<=l; p++){
        

    
    

    for(i=1; i<=row; i++){
        for(space=1; space<=row-i; space++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }


    for(i=row-1; i>=1; i--){
        for(space=1; space<=row-i; space++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }


    
    }

    return 0;
}