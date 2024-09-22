// DMA using malloc()
// malloc() -memory allocation, generaly used to allocate memory to structures.
// It will allocate a single block.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *ptr;

    printf("Enter no. of values: ");
    scanf("%d", &n);

    ptr= (int*)malloc(n*sizeof(int));

    printf("\nEnter values: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("The Entered values are: ");
    for(i=0; i<n; i++){
        printf("\n%d", *(ptr+i));
    }

    free(ptr);

    return 0;
}