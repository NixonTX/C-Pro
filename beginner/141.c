// Pointer Arithmetic
// Increment
#include<stdio.h>
int main(){
    int a[] = {2, 5, 56, 33, 1};
    int *p;
    p=a;

 /*   printf("%d",*p++);      // post increment
    printf("\n%d",*p);
    printf("\n%d",*p);
    printf("\n%d",*p++);
    printf("\n%d",*p);
*/
    printf("\n%d",*p);      // pre increment
    printf("\n%d",*++p);

    printf("\n%d %d",*p++, *p++);

    printf("\n%d",(*p)++);
    printf("\n%d",*p);

    return 0;
}