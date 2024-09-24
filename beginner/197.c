// Types of Recursion
// Non-Tail recursion - You still have something to do after the recursive call, you still have some tasks to execute. 
#include<stdio.h>

void print(int a){
    if(a < 1) return;
    else
    printf("%d\n",a);
    print(a/2);
    printf("%d\n",a);
}

int main(){
    print(10);

    return 0;
}