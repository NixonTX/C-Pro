// realloc() -reallocation
/*  ~ Resize increse/ Decrease
    ~ Resize the previous allocated memory using malloc()/ calloc(). 
    ~ Should dynamically allocated through malloc/calloc, otherwise shows undefined behaviour.
    ~ It resize the previous allocated memory block without losing the previous content.*/

    /* we use realloc for reallocation of memory. We can resize the memory allocated, either 
    we can increase or we can decrease.
    realloc also accepts two arguments, One for previously allocated pointer and other is for updated size.
    While resizing the program according to requirements if we use NULL in place previous allocated pointer it behaves as malloc functions.
    If we use NULL in size_t size place it will free the previous pointer.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);

    ptr= (int*)calloc(n, sizeof(int));

    printf("\nEnter values: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("\nEnter updated n: ");
    scanf("%d", &n);

    int *ptr1= (int*)realloc(ptr, n* sizeof(int));
    //int *ptr1= (int*)realloc(NULL, n* sizeof(int));     // realloc will act as malloc.
    //int *ptr1= (int*)realloc(ptr,NULL);                   // equivalent as freepointer, Freeing the previously allocated memory.

    printf("\nPrevious address=%d, New address=%d", ptr, ptr1);

    printf("\nvalues are: ");
    for(i=0; i<n; i++){
        printf("\n%d", *(ptr1+i));
    }

    free(ptr1);     // freeing the newly updated pointer.

    return 0;
}