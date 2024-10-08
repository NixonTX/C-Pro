#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, *ptr;
    
    printf("Enter no. of val: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));

    printf("enter vals: ");
    for(i = 0; i<n; i++) {
        scanf("%d", (ptr+i));
    }

    printf("The Entered values are: ");
    for(i=0; i<n; i++){
        printf("\n%d", *(ptr+i));
    }

    free(ptr);
    
    return 0;
}