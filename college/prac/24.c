// sum of elements ina an array using pointer.
#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 5, 6, 9, 8}; 

    int *p = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum=0;

    for(int i=0; i < n; i++){
        sum = sum + *p;
        p++;
    }

    printf("sum of array is %d.", sum);
    
}