#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *prt1, *prt2;

    printf("Enter the N number: ");
    scanf("%d", &n);

    prt1= (int*)malloc(n*sizeof(int));

    printf("enter the values: ");
    for(i=0; i<n; i++){
        scanf("%d", (prt1+i));
    }

    printf("enter updated N: ");
    scanf("%d", &n);

    prt2= (int*)realloc(prt1, n* sizeof(int));

    printf("values are: ");
    for(i=0; i<n; i++){
        printf("\n%d", *(prt2+i));
    }

    free(prt2);

    return 0;
}