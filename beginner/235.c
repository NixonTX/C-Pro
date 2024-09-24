#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, j, *ptr1;
    float num,*ptr2;

    printf("Enter no. of blocks: ");
    scanf("%d", &n);

    ptr1= (int*)calloc(n, sizeof(int));

    if(ptr1 == NULL){
        printf("cannot allocate memory.");
        exit(1);
    }

    printf("Enter the values for calloc: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr1+i));
    }

    printf("The values of calloc are:\n");
    for(i=0; i<n; i++){
        printf("%d\n", *(ptr1+i));
    }

    free(ptr1);

    printf("\nEnter no. of float values: ");
    scanf("%f", &num);

    ptr2=(float*)malloc(num *sizeof(float));
    if(ptr2 == NULL){
        printf("Did not allocate memory.");
        exit(1);
    }

    printf("Enter values for malloc: ");
    for(j=0; j<num; j++){
        scanf("%f", (ptr2+j));
    }

    printf("The values of malloc are:\n");
    for(j=0; j<num; j++){
        printf("%f\n", *(ptr2+j));
    }

    free(ptr2);

    return 0;

}