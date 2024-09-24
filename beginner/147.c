// Void Pointer
#include<stdio.h>
int main(){
    int a=0;
    float b=1.1;
    char c='2';

    void *vp;

    //vp=&a;
    vp=&b;
    //vp=&c;

    /*
    int *ip, a=0;
    float *fp, b=1.1;
    char *cp, c='2';

    //ip=&b;    // Not possible
    //fp=&c;    // Not correct

    ip=&a;
    fp=&b;
    cp=&c;

    //printf("\n%d",*ip);
    //printf("\n%f",*fp);
    //printf("\n%c",*cp);

    //printf("\n%d",*ip);
    //printf("\n%f",*fp);
    */

   //printf("\n%d",*(int*)vp);
   printf("\n%f",*(float*)vp);
   //printf("\n%c",*(char*)vp);

    return 0;
}