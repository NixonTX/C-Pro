#include<stdio.h>
//int i=10;
int main(){
    extern int i;

    printf("%d", i);
    {
        int i=10;

        printf("\n%d", i);
    }
    return 0;
}