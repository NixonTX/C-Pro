// Structure Packing
#include<stdio.h>
#pragma pack(1)     

struct abc
{     
    char a;
    int b;
    char c;
    //double c;
}s2;

int main(){
    //struct abc s2;
    printf("with packing: %d",sizeof(s2));

    return 0;
}