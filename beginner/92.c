#include<stdio.h>
int main(){

    int i=1, r=5;

    while(i<=r) {
        int j=1;
        while(j<=i) {
            printf("* ");
            j++;        //If True then to up(the while) or False going down.
        } 
        printf("\n");
        i++;
    }
    return 0;
}