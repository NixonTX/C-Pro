#include<stdio.h>
int incr(int i)
{                       // static holds its previous value.
    static int count=0; // static : the lifetime of static variables are throughout the program.
    count = count +i;
    return (count);
}

int main(){
    int i, j;
    for(i=0; i<=4; i++){
        j= incr(i);
    }
    printf("j is %d",j);
    return 0;
}