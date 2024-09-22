// Designated initialization
#include<stdio.h>

struct question
{
    int a;
    float b;
    int c;
};

int main(){
    struct question q={.b=1, .c=10, .a=15};
    printf("%d %f %d", q.a, q.b, q.c);

    return 0;
}