#include<stdio.h>
int main(){
    int a=8, b;      
    b=(a++, ++a, a>>2);
    printf("\na is %d",a); 
    printf("\nb is %d",b);   
  
    return 0;
}