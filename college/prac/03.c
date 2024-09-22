#include<stdio.h>

int MM();

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    MM(a, b);

    return 0;
}

int MM(int x, int y){
    if(x < y){
        printf("%d is the max.", y);
        printf("\n%d is the min.", x);}

    else{
        printf("%d is the max.", x);
        printf("\n%d is the min.", y);}

    return (x, y);
    
}