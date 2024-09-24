#include<stdio.h>
int main(){
    int a[10], i;
    int even=0, odd=0;              //Garbage value

    printf("Elements in the Array: ");
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        if(a[i]%2 == 0)
            even=even+1;
        else
            odd++;
    }
    printf("\nTotal Even elements are: %d",even);
    printf("\nTotal Odd elements are: %d",odd);

    return 0;
}