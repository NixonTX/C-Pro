// auto storage class
/* ~ Stored in RAM */
#include<stdio.h>

// auto int x=50;      // No program scope is allowed for auto storage class. Only block and function/method.

int main(){
    auto int x=10;
    //int x=10;     // By default it is auto
    {
        //auto int x=20;
        auto int x;     // garbage value
        printf("x=%d",x);
    }
    printf("\nx=%d",x);
    return 0;
}