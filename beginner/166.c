// With argument With return type
#include<stdio.h>

int sum(int, int);

int main(){
    int x, y, w;
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);
    w=sum(x,y);
    printf("sum= %d",w);

    return 0;
}

int sum(int a, int b){
    //int s=0;
    //s=a+b;
    return a+b;
}