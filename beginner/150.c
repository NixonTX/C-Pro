// Wild Pointer
/* If the pointer is uninitialized, it will acts as a wild pointer. */
#include<stdio.h>
int main(){
    
    int *pr;
    //printf("%d\n",*pr);     // wild pointer
    int x=5;
    pr = &x;
    printf("%d\n",*pr);

    return 0;
}