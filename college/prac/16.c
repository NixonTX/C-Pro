// program to search an element in an array using pointer
#include<stdio.h>

int search(int *arr, int n, int data){
    for(int i=0; i<n; i++){
        if(*arr == data){
            return i;
        }
        arr++;
    }
    return -1;
}

int main(){
    int n, i;

    printf("enter the no. of elements: ");
    scanf("%d", &n);

    printf("enter %d elements in array: ", n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nenter the element you wanna search: ");
    int data;
    scanf("%d", &data);

    int result = search(arr, n, data);

    if(result != -1){
        printf("the element %d found at index %d", data, result);
    }
    else{
        printf("Element %d Not found", data);
    }

    return 0;

}