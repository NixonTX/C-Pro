// sum of first n no.s using recursion

#include<stdio.h>

int sum();

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("sum of no.s until %d is %d.", n, sum(n));

    return 0;
}

int sum(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}