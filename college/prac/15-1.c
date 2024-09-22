#include<stdio.h>

void copyarr(int *sourcearr, int *destinationarr, int n){
    for(int i=0; i<n; i++){
        *(destinationarr + i) = *(sourcearr + i);
    }
}

int main(){
    int n, i;

    printf("no. of elements in the arr: ");
    scanf("%d", &n);

    int sourcearr[n];
    int destinationarr[n];

    printf("enter %d elements into source arr: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &sourcearr[i]);
    }

    copyarr(sourcearr, destinationarr, n);

    printf("\nSource arr: ");
    for(i=0; i<n; i++){
        printf("%d ", sourcearr[i]);
    }

    printf("\nCopied arr: ");
    for(i=0; i<n; i++){
        printf("%d ", destinationarr[i]);
    }

    return 0;
}