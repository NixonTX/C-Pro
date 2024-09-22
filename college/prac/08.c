// find largest and smallest element in an Array
#include<stdio.h>

int main(){

    int n, i;

    printf("enter no. of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements in the Array: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe Array is:");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }

    int largest= arr[0];
    int smallest= arr[0];

    for(i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("\nThe largest element is %d", largest);
    printf("\nThe smallest element is %d", smallest);

    return 0;
}