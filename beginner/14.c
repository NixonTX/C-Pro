// write a program to find the sum of elements of an array using function 
#include<stdio.h>

int soa(int arr[], int n){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){ 
    int n, i;

    printf("enter the size of array: ");
    scanf("%d", &n);

    printf("enter %d elements: ", n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = soa(arr, n);

    printf("The sum of elements in the array is %d.",sum);

    return 0;

}