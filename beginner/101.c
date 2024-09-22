//Maximum & minimum
#include<stdio.h>
int main(){
    int n, i;

    printf("Enter number of elements in the Array: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];

    for(i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }

    printf("\nThe max num is : %d",max);
    printf("\nThe min num is : %d",min);

    return 0;
}