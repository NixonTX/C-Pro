// DMA using calloc()
/* calloc() - contiguous allocation
    ~ used to dynamically allocate multiple block of memory & each block is of same size.
    ~ Whatever the memory has allocated the memory would be initialized with 0 by default, all the blocks.
    ~ Takes two argument.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *ptr;

    printf("Enter no. of values: ");
    scanf("%d", &n);

    ptr= (int*)calloc(n, sizeof(int));

    /*printf("\nEnter values: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }*/

    printf("The Entered values are: ");
    for(i=0; i<n; i++){
        printf("\n%d", *(ptr+i));
    }

    free(ptr);

    return 0;
}