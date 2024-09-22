// free() -Deallocating the DMA using free() ; release the DMA.
/* When you use DMA concept to allocate memory from heap section then that memory would not be deallocated automatically. 
    Automatically in SMA. You have to use free() function in DMA. */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *ptr;

    ptr= (int*)malloc(3*sizeof(int));

    if(ptr == NULL){
        printf("memory not allocated.");
    }

    printf("\nenter the values: ");
    for(i=0; i<3; i++){
        scanf("%d", (ptr+i));
    }

    //free(ptr);        // Undefined behaviour      // Only in DMA

    printf("\nThe entered values are: ");
    for(i=0; i<3; i++){
        printf("\n%d", *(ptr+i));
    }

    free(ptr);

    return 0;
}