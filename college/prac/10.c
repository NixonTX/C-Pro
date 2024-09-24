// Binary search (works efficiently in a sorted Array)
#include<stdio.h>

int BS (int arr[], int n, int target){
    int l=0; 
    int r= n-1;
    int mid;

    while(l<=r){
        mid = (l+r)/2;

        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid +1;
        }
    }
    return -1;
}

int main(){
    int i, n;

    printf("enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nenter %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int target=0;
    printf("\nenter the data to be searched: ");
    scanf("%d", &target);

    int result = BS(arr, n, target);

    if(result != 1){
        printf("%d found at index %d.", target, result);
    }
    else{
        printf("%d Not found!.", target);
    }
    
    return 0;

}