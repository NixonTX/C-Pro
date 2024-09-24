// Structure Padding -
/* Memory properly used. Less weightage of memory.
   Automaticaly done by compiler, Increase speed/performance. Reduce weightage of no. of cpu cycles. */

#include<stdio.h>

struct abc
{
    char c;     // Increasing order of their memory size
    char a;
    int b;
    //double c;
}s2;

int main(){
    //struct abc s2;
    printf("with padding: %d",sizeof(s2));

    return 0;
}