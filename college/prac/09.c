// To search an element in an Array
#include<stdio.h>

int main(){
    int n, i;

    printf("enter no. of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers in the Array: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe Array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int data=0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &data);

    int found = 0; // a flag
    for(i=0; i<n; i++){
        if(data == arr[i]){ 
            printf("element %d found at index %d position %d.", data, i, i+1);
            found = 1;
            break;
    }
    }

    if(!found){
        printf("Not found!");
    }
    
    return 0;
}
