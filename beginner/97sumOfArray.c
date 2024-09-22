//Addition of two array
#include<stdio.h>
int main(){
    int arr1[5], arr2[5], Sarr[5], i;

    printf("Enter 5 elements of arr1: ");
    for (i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter 5 elements of arr2: ");
    for (i=0; i<5; i++){
        scanf("%d",&arr2[i]);
    }
    //printf("\nSumarr: ");
    for (i=0; i<5; i++){
        Sarr[i]=arr1[i]+arr2[i];
        //printf(" %d",Sarr[i]);
        //printf("\nSum of element at index %d : %d", i, Sarr[i]);
    }
    printf("\narr1: ");
    for (i=0; i<5; i++){
    printf(" %d",arr1[i]);
    }
    printf("\narr2: ");
    for (i=0; i<5; i++){
    printf(" %d",arr2[i]);
    }

    printf("\nSum of the Array: ");
    for (i=0; i<5; i++){
            printf(" %d",Sarr[i]);
    }
    return 0;
}