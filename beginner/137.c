#include<stdio.h>
int main(){
    int a=10, b=11;
    int *p, *q;
    //p=&a;
    //q=p;
    q=&b;
    *q=*p;

    //printf("a= in a:%d in *p:%d in *q:%d",a,*p,*q);
    printf("a= in a:%d in *q:%d in *p:%d",a,*q,*p);

    return 0;
}