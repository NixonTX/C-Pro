// Dangling Pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int *)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);

    free(ptr);      // free whatever the memory is pointing. But the pointer is still pointing to that. Now pointer acts as a Dangling Pointer.
    printf("%d\n",*ptr);    // garbage value.

    ptr=NULL;       // to get rid of the situation, use NULL Pointer
    //printf("%d\n",*ptr);
    if(ptr==NULL){ 
        printf("this is a Dangling Pointer");
    }
    else{
        printf("%d\n",*ptr);
    }

    return 0;
}