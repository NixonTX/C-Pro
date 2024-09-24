//Optimized Bubble Sort         //Use: If the array is already sorted / avoid unnecessary sorting.
#include<stdio.h>
int main(){
    int n, i, j, temp=0, flag=0;

    printf("Enter number of elements in the Array: ");
    scanf("%d",&n);

    printf("\nEnter %d Elements : ",n);
    int arr[n];
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        flag=0;
    }
    
    for(i=0; i<n-1; i++){           
        for(j=0; j<n-1-i; j++){     
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)         //If no swaps were performed during a pass (i.e., flag remains 0), it "means the array is already sorted", and the loop is terminated early.
            break;
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
    
    return 0;
}