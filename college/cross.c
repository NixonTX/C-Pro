#include<stdio.h>
int main() { 
    int i, j;

    for(i=1; i<=6; i++) {
        if(i != 3) {
            printf("  *  \n");
        } else {
            for(j=1; j<=5; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
