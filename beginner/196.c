// Types of Recursion
// Tail recursion - No other statement to execute after the recursive call. (wastage of memory).
#include<stdio.h>

void print(int a){
    if(a < 1) return;
    else
    printf("%d\n",a);
    print(a/2);
}

int main(){
    print(10);

    return 0;
}