// With Argument Without Return type
#include<stdio.h>

void sum(int, float);

int main(){
    int a; 
    float b;
    printf("enter a&b: ");
    scanf("%d %f",&a,&b);
    sum(a, b);
    return 0;    
}

void sum(int x, float y){
    float result=0;
    result=x+y;
    printf("sum= %f",result);
}