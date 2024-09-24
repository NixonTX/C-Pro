#include<stdio.h>
int main(){
    int i=1;

    do{
        printf("%3d",i++);
    }
    while(i<=5);
    return 0;
}