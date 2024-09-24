#include<stdio.h>
int main(){
    int i;

    for (i=2; i<25; i=i+2) {
        printf("\ni: %d",i);
    }
    printf("\nThat's it");
    return 0;
}