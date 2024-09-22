// Conditional Pre-processor
#include<stdio.h>

int main(){
    printf("date : %s", __DATE__);
    printf("\nTime : %s",__TIME__);
    printf("\nFILE : %s", __FILE__);
    printf("\nLINE : %s",__LINE__);
    printf("\nANSI : %s",__STDC__);     // The compiler is according to NSI standard or Not

    return 0;
}