#include<stdio.h>
int main(){
    int a[2][3], i, j;
    int b[3][2];

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
            b[j][i]=a[j][i];
        }
        printf("\n");
    }

    printf("Transpose matrix using b: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t",b[j][i]);
        }
        printf("\n");
    }    
    return 0;
}