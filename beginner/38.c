#include<stdio.h>
int main(){
    int a=10, b=5, result;
    result=(a>b) && a++;
    printf("%d",result);
    printf("\n%d",a);
    printf("\n-----");

    int x=10, y=5,result2;
    result2=(x>y) || x++;
    printf("\n%d",result);
    printf("\n%d",x);

    return 0;
}