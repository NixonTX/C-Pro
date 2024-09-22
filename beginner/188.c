#include<stdio.h>

int mul(int d, int e){
    printf("product=%d\n", d*e);
}

int div(int f, int g){
    printf("Division=%d\n", f/g);
}

int add(int a, int b){
    printf("addition=%d", a+b);
}

int result(int(*res)(int ,int)){
    (*res)(6, 6);
}

int main(){
    result(mul);
    result(div);
    result(add);

    return 0;
}