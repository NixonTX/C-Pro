// << Leftshift, >> Rightshift
#include<stdio.h>
int main(){
    int a=10, b=50;
    printf("\n%d",a<<2);    //shortcut- 10*2^2= 10*4= 40
    printf("\n%d",a<<4);    //shortcut- 10*2^4= 10*16= 160
    printf("\n-----");

    printf("\n%d",a>>2);    //shortcut- 10/2^2= 10/4= 2.5 (takes only decimal, ignore the float)
    printf("\n%d",a>>4);    //shortcut- 10/2^4= 10/16= 0.625
    printf("\n%d",b>>4);    // 50/2^4= 50/16= 3.125

    return 0;
}