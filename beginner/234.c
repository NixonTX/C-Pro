#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, *ptr;

    printf("Enter no. of values: ");
    scanf("%d", &n);

    ptr= (int*)malloc(n*sizeof(int));

    printf("Enter the values: ");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("The values are:\n");
    for(i=0; i<n; i++){
        printf("%d\n", *(ptr+i));
    }

    free(ptr);

    int l=10;
    float *ptr2;

    ptr2=(float*)calloc(l, sizeof(float));

    printf("Enter %d values: ",l);
    for(i=0; i<l; i++){
        scanf("%f", (ptr2+i));
    }

    printf("The values are:\n");
    for(i=0; i<l; i++){
        printf("%f\n", *(ptr2+i));
    }

    free(ptr2);

    return 0;

}