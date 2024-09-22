// program to swap value of two variables using function call by reference
#include<stdio.h>

void fun(int *x, int *y){
    int temp =  *x;
     *x =  *y;
     *y =  temp;

     printf("x= %d y= %d", *x, *y);
}

int main(){
    int x= 2;
    int y= 3;

    fun(&x, &y);

    printf("\nx= %d y= %d", x, y);

    return 0;
}