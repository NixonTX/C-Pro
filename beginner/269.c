// Christmas tree using c program
#include<stdio.h>

int main(){
    int i, j, space, r;

    printf("Enter the no. of rows: ");
    scanf("%d", &r);

    // for the branch part
    for(i=1; i<r; i++){
        for(space=1; space<=(r-i); space++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    // for the stem part
    int Sspace= (r/2)+1;
    for(r=0; r<=Sspace; r++){
        printf(" ");
    }
    printf("||");

    return 0;
}