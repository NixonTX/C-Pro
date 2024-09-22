//selection sort
#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j, n;

    printf("Enter num of elements: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The unsorted array is ");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");

    for(i=0; i<n-1; i++){
        int min=i;

        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;}
        }
        if(min != i){
            swap(&arr[i], &arr[min]);
        }
    }

    printf("\n");
    printf("The sorted array is ");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
    return 0;
}