#include<stdio.h>
int main(){
    int i=1;

    do{
        int j=1;
        do{
            printf("%3d",i*j);
            j++;
        } while(j<=5);
        printf("\n");
        i++;
    } while(i<=5);

    return 0;
}