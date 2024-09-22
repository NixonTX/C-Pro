#include<stdio.h>

int mul(int x, int y){
    return x*y;
}

int main(){
    int s=0;
    int (*malala)(int, int)=&mul;

    s=(*malala)(5, 5);
    printf("%d",s);

    return 0;
}