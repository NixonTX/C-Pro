// array
#include<stdio.h>

int main(){
    int n, i;

    printf("enter no. of ele:");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d ele:", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int sumofP=0;
    for(i=0; i<n; i++){
        if(arr[i] >= 0){
            sumofP= sumofP + arr[i];
        }
    }

    int sumofN=0;
    for(i=0; i<n; i++){
        if(arr[i] < 0){
            sumofN= sumofN + arr[i];
        }
    }

    printf("\nThe of Positive ele in Array is %d", sumofP);
    printf("\nThe of Negative ele in Array is %d", sumofN);

    return 0;
}