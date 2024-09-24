// calcutalte sum of first 20 natural num. using recursive fun
#include<stdio.h>

int sum();

int main(){
    int t=20;
    printf("The sum of first 20 natural no. is %d", sum(t));

    return 0;
}

int sum(int t){

    if(t==0){
        return 0;}
    else{
        return t + sum(t-1);
    }
}