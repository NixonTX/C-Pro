// Bubble sort
#include<stdio.h>
int main(){
    int n, i, j, temp=0;

    printf("Enter number of elements in the Array: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){           //pass= no. of elements -1 (here, n-1)      //i: number of passes through the array.
        for(j=0; j<n-1-i; j++){     //when i value increases, no. of comparisons decreases (j<n-1"-i"). Unnecessary comparison can be avoided. //j: compare adjacent elements and perform swaps if necessary.
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
    
    return 0;
}