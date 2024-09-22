//break in do-while
#include<stdio.h>
int main(){
    int i=1;

    do{
        printf("i=%d\n",i);
        i++;

        if(i>5){
            break;
        }        
    }
    while(1);

    return 0;
}