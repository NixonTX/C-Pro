// Returning pointer from function
#include<stdio.h>

int * returnpointer(int []);

int main(){
    int *p;
    int a[] = {1, 2, 3, 4, 5};
    /* a, name of the array constant to the first element of array.
     We connot do increment or decrement with this a. Cannot change the value of the a. */
    p = returnpointer(a);
    printf("%d",*p);

    return 0; 
}

int * returnpointer(int b[]){
    b= b+ 2;
    return b;
}