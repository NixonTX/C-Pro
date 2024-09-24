#include<stdio.h>
int main(){
    int a[]={10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p=a;

    printf("%d\n",*p);
    printf("%d %d %d",(*p)++, *p++, *++p);
    q=p+3;
    printf("\n%d",*q-3);
    printf("\n%d",*--p+5);
    printf("\n%d",*p + *q);

    return 0;
}