#include<stdio.h>

int ls(int, int);

int main(){
    int x, y, z;
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);
    z=ls(x, y);
    printf("The Largest is %d",z);
}

int ls(int a, int b){
    if(a < b){
        return (b);
        }
    else{
        return (a);
    }
}