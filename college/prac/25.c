// finding largest and smallest elements in an array using pointer
#include <stdio.h>

int main(){
    int arr[] = {2, 3, 7, 5, 8};

    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;

    int largest = ptr[0];
    int smallest = ptr[0];

    for(int i=0; i<size; i++){
        if(ptr[i] > largest){ 
        largest = ptr[i];}

        if(ptr[i] < smallest){ 
            smallest = ptr[i];
        }
    }
    printf("\n%d is the largest ele ", largest);
    printf("\n%d is the smallest ele ", smallest);
        
    return 0;
}