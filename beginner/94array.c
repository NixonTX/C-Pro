//array
#include<stdio.h>
int main(){
    int i;
    int a[5];

    printf("Enter the elements in the array: ");

    for(i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }

    return 0;
}