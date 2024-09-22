#include<stdio.h>

int * returnptr(int A[]){
    A = A+1;
    return A;
}

int main(){
    int *p;
    int a[]= {10, 20, 30};
    p=returnptr(a);
    printf("%d",*p);

    return 0;
}