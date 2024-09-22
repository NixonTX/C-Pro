#include<stdio.h>
#define MUL(a, b) a*b

int main(){
    //printf("product= %d", MUL(6, 5));
    printf("product= %d", MUL(5-2, 7+4));       

/*  = 5 - (2 * 7) + 4
    = 5 - 14 + 4
    = -5 */

    return 0;
}