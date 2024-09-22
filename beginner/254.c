#include<stdio.h>

int main(){
    //register int data=10;
     int data=10;

    int *pisumdata=NULL;

    pisumdata = &data;      // Cannot access its address. Bcz It stored in cpu register.

    *pisumdata = 5;

    printf("%d", *pisumdata);

    return 0;
}