#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr1, n, i;
    printf("val of n: ");
    scanf("%d", &n);

    ptr1 = (int*)malloc(n*sizeof(int));

    printf("\nenter vals: ");
    for(i=0; i<n; i++) {
        scanf("%d", (ptr1+i));
    }

    printf("\nNew n: ");
    scanf("%d",&n);

    int *ptr2 = (int*)realloc(ptr1, n*sizeof(int));

    printf("\nPrev add is %d, New add is %d", ptr1, ptr2);

    printf("\nThe vals: ");
    for(i=0; i<n; i++) {
        printf("%d\n", *(ptr2+i));
    }

    free(ptr2);

    return 0;
}