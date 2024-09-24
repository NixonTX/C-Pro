// Matrix Multiplication
#include<stdio.h>
int main(){
    int a[3][3], b[3][2], c[3][2], i, j, k, sum;

    printf("Enter Matrix A elements: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    printf("Enter Matrix B elements: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");
    printf("Matrix A is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix B is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("M.A * M.A, Matrix C is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            sum=0;
            for(k=0; k<3; k++){
                sum= sum + a[i][k] * b[k][j];
                c[i][j]= sum;
            }
        printf(" %d",c[i][j]);
        }printf("\n");
    }
    return 0;
}