// without argument with return type
#include<stdio.h>
int sum(void);

int main(){
    int s;
    s=sum();
    printf("sum=%d",s);
    return 0;
}

int sum(){
    int a, b, sum=0;
    printf("Enter a&b: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return (sum);
    printf("\nHello.");
}