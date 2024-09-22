//Binary search
//In a Sorted Array
#include<stdio.h>

int binarysearch(int arr[], int n, int data){
    int l=0;
    int r=n-1;
    int mid;

    while(l<=r)
    {
        mid=(l+r)/2;

        if(data == arr[mid])
            return mid;
        else if(data < arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;      //// Element not found, return -1
}

int main()
{
    int n, data;

    printf("Enter no of elements in the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter sorted elements in ascending order: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you wanna search: ");
    scanf("%d",&data);

    int result= binarysearch(arr, n, data);

    if(result != -1){
        printf("Element %d found at index %d.\n",data, result);
    } else {
        printf("Element %d not found in the array.\n", data);
    }

    return 0;
}