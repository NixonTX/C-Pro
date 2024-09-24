#include<stdio.h>
int main(){
    int A[4+1],i;

    printf("Enter the elements: ");
    for (i=0; i<5; i++){
        scanf("%d",&A[i]);
    }
    for(i=4; i>=0; i--){
        printf("\nElement of Array %d : %d",i,A[i]);
    }

    return 0;
}