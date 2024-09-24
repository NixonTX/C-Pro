// addtion of all elements in Array.
#include<stdio.h>

int main(){
    int arr[5], i, sum=0;

    printf("enter the elements in the array: ");

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    printf("\nSum of elements in the array:");
    for(i=0; i<5; i++){
        sum= sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}