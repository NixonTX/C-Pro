#include<stdio.h>
int bs(int a[], int t, int s){
    int l=0;
    int r=s-1;
    int mid;

while(l<=r){
    mid=(l+r)/2;

    if(t == a[mid]){
        return mid;
    }
    else if(t < a[mid]){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
}
return -1;
}

int main(){
    int n,tar;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);

    int a[n];
    int i;
    printf("\nEnter the sorted elements in ascending order: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the search element: \n");
    scanf("%d",&tar);

    int result=bs(a, tar, n);

    if(result != -1){
        printf("The element %d found at index %d.\n",tar, result);
    }
    else {
        printf("Element not found.\n");
    }
    return 0;
}
