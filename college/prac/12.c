// quicksort
#include<stdio.h>

void qs(int a[], int f, int l){
    int i, j, pivot, temp;
    if(f < l){
        pivot = f;
        i = f;
        j = l;
    }
    while(i < j){
        while(a[i] <= a[pivot] && i < l)
        i++;
        while(a[j] > a[pivot])
        j--;

        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        qs(a, f, j-1);
        qs(a, j+1, l);
    }
}

int main(){
    int i, n, a[25];
    printf("enter the no. of elements: ");
    scanf("%d", &n);

    printf("enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    qs(a, 0, n-1);
    printf("\nsorted elements:");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}