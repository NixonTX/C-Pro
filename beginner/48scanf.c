//scanf()
#include<stdio.h>
int main(){
    int a, b, sum;      //Declaring variable
    printf("Enter two num:");
    scanf("%d%d",&a,&b);        //taking user input     & -address
    sum=a+b;
    printf("a=%d, b=%d,sum=%d",a,b,sum);

    return 0;
}