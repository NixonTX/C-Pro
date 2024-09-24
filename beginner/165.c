#include<stdio.h>

void oe(int);

int main(){
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    oe(num);
}

void oe(int x){
    //printf("Enter the num: ");
    //scanf("%d",&x);
    if(x%2 == 0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
}