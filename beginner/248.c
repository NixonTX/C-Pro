// Extern -All Global variables are in this category
/* ~ Stored in RAM
    ~ Lifetime -till end of the program */

#include<stdio.h>

void fun1();
void fun2();

int main(){
    extern int a;
    printf("a = %d\n", a);

    fun1();
    fun2();
    
    return 0;
}

void fun1()
{
    int a = 2; a++;

    printf("a = %d\n", a);
}

void fun2()
{
    printf("Hello Mike Testing.\n");
}
    int a=10;