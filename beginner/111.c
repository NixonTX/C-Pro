#include<stdio.h>
int main(){
    int a[4][4], i, j;

    printf("Enter the elements in the matrix: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    printf("The matrix is: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Transpose matrix is: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}