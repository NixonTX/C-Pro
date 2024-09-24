//Array in Reverse order
#include<stdio.h>
int main(){
    int arr[5], i;

    printf("Enter elements in the Array: ");
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }    
    printf("elements in reverse order: ");
    for(i=4; i>=0; i--){
        printf(" %d",arr[i]);
    }
    return 0;
}