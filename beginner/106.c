//Linear search
#include<stdio.h>
int main()
{
    int i, n, data;

    printf("Enter number of elements of the Array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("\nArray: ");
    for(i=0; i<n; i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    printf("\nEnter the data you wanna search: ");
    scanf("%d",&data);

    for(i=0; i<n; i++){
        if(a[i] == data){
            printf("element found at index %d, position %d",i, i+1);
            break;
        }
    }

    if(i == n){
        printf("Element not found");
    }

    return 0;
}