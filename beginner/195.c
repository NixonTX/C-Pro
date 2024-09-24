#include<stdio.h>

int pack1(int);
int pack2(int);

int main(){
    printf("sum of no.s until 10: %d",pack1(5));

    return 0;
}

int pack1(int a){
    int result=0;
    if(a == 0) return result;
    else
    result = a+(pack2(a - 1));
    return result;
}

int pack2(int a){
    int result=0;
    if(a == 0) return result;
    else
    result = a+(pack1(a - 1));
    return result;
}