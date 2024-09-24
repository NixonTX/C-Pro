// write a program to copy one array to another using pointer

#include<stdio.h>

void copyArray(int *source, int *destination, int n){
    for(int i=0; i<n; i++){
        *(destination + i) = *(source + i);

    }
}

int main(){
    int n, i;

    printf("enter the no. of elements: ");
    scanf("%d", &n);

    int sourceArray[n];
    int destinationArray[n];

    int arr[n];
    printf("enter %d elements in the sourceArray: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &sourceArray[i]);
    }

    copyArray(sourceArray, destinationArray, n);

    printf("\nSource Array: ");
    for(i=0; i<n; i++){
        printf("%d ", sourceArray[i]);
    }

    printf("\nCopied Array: ");
    for(i=0; i<n; i++){
        printf("%d ", destinationArray[i]);
    }

    return 0;
}