// selection sort
#include<stdio.h>

void swp(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int i, j, n;

    printf("enter the no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe unsorted Array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    for(i=0; i< n-1; i++){
        int min=i;

        for(j= i+1; j<n; j++){
            if(arr[j] < arr[i]){
                min = j;
            }
            if(min != i){
                swp(&arr[i], &arr[min]);
            }
        }
    }
    printf("\nThe sorted array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}