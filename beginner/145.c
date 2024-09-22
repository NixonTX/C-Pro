// const in Pointers
#include<stdio.h>
int main(){
    int a = -11;
    //const int a = -11;
    int *p = &a;
    *p = 10;

    printf("%d",a);

    return 0;
}