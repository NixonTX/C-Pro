//Transpose of a matrix
#include<stdio.h>
int main(){
    int a[2][3], i, j;

    printf("Enter elements in matrix: ");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}