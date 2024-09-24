// Sum of individual rows and columns of a Matrix
#include<stdio.h>
int main(){
    int a[3][3], i, j, SR, SC;

    printf("Enter elements: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    printf("The Matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0; i<3; i++){
        SR=SC=0;
        for(j=0; j<3; j++){
            SR=SR + a[i][j];
            SC=SC + a[j][i];
        }
    printf("Sum of Row =%d\t,Sum of Column =%d\n",SR,SC);
    }
    return 0;
}