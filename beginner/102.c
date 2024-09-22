//search
#include<stdio.h>
int main(){
    int n, i, s;
    //int found=0;

    printf("Enter number of elements in the Array: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the value you want to search: ");
    scanf("%d",&s);
    for(i=0; i<n; i++){
        if(s==arr[i])
            {printf("\nThe no.%d is in index %d", s,i);
            //found=1;      //setting a flag
            break;}
    } if(s!=arr[i])
            printf("\nCheck the no.");

    return 0;
}