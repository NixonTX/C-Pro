// Selection sort -selecting the smallest and swaping it.
#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int i, j, n;

    printf("enter the no. of elements: ");
    scanf("%d", &n);

    printf("enter %d elements: ", n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nthe unsorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    
    for(i=0; i<n-1; i++){
        int min =i;

        for(j = i+1; j < n; j++){
            if(arr[j]< arr[min])
            min = j;

            if(min != i)
            swap(&arr[i], &arr[min]);
            
        }
    }

    printf("\nThe sorted array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}