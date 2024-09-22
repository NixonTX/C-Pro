#include<stdio.h>
int main() {
    int m1, n1, n2, p2, m3, p3;
    
    printf("Enter No of Raws of M1: ");
    scanf("%d", &m1);
    printf("Enter No of Cols M1: ");
    scanf("%d", &n1);

    printf("Enter No of Raws of M2: ");
    scanf("%d", &n2);
    printf("Enter No of Cols M2: ");
    scanf("%d", &p2);

    int arr1[m1][n1];

    printf("matrix1: ");
    for(int i=0; i<m1; i++) {
        for(int j=0; j<n1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[n2][p2];
    printf("\nmatrix2: ");
    for(int i=0; i<n2; i++) {
        for(int j=0; j<p2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nMatrix 1 :\n");
    for(int i=0; i<m1; i++) {
        for(int j=0; j<n1; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 :\n");
    for(int i=0; i<n2; i++) {
        for(int j=0; j<p2; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");    
    }

    // printf("\nResult Matrix :\n");
    // int arr3[r][c];
    // for(int i=0; i<r; i++) {
    //     for(int j=0; j<c; j++) {
    //         arr3[i][j] = arr1[i][j] * arr2[i][j];
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");    
    // }

    return 0;
}