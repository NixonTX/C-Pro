#include<stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    while (count < n) {
        arr[count++] = 0;
    }
    
}

int main() {
    int n, i;

    printf("enter the no. of ele in the Array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the ele: ");
    for(i= 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array Before: ");
    for(i= 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    moveZerosToEnd(arr, n);

    printf("\nArray After: ");
    for(i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}