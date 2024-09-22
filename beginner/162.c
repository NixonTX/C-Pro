// without argument without return value
#include<stdio.h>
void add(void);
void sub(void);
void mul(void);
void div(void);

int main(void){
    add();
    sub();
    mul();
    div();
    return 0;
}

void add(){
    int a=10, b=5, addition=0;
    addition=a+b;
    printf("result of Add: %d",addition);
}
void sub(){
    int a=10, b=5, subtraction=0;
    subtraction=a-b;
    printf("\nresult of Sub: %d",subtraction);
}
void mul(){
    int a=10, b=5, multiplication=0;
    multiplication=a*b;
    printf("\nresult of Mul: %d",multiplication);
}
void div(){
    int a=10, b=5, division=0;
    division=a/b;
    printf("\nresult of Div: %d",division);
}