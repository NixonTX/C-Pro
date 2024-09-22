#include<stdio.h>
int main(){
    int a,b;
    float c;
    scanf("\n%d%d%f",&a,&b,&c);
    printf("\n%11d",a);   //specifying width(between % and d/f/whatever)    //prints %d after 11 digits of space
    printf("\n%06d",b);
    printf("\n%3.2f",c);


    return 0;
}