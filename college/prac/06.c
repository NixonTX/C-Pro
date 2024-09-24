// power of any no. using recursion
#include<stdio.h>

int powe();

int main(){
    int n, p;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("enter the power: ");
    scanf("%d", &p);

    printf("power of %d number is %d.", n, powe(n, p));

    return 0;
}

int powe(int n, int p){
    if(p == 0){
        return 1;
    }
    else{
        return n*powe(n, p-1);
    }
}