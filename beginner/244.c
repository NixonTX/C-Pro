/* Storage Classes -Auto, Register, Static, External
    1. Default -Default value
    2. Location
    3. Scope -Program, Block, Function
    4. Life time. */

#include<stdio.h>

void fun1();

int a=50;       // Program scope

int main(){
    //int a=1;
    fun1();

    {
        int a=10;
        printf("\nInside block1: %d", a);       // Block scope
    }

    {
        printf("\nInside block2: %d", a++);
    }

    printf("\nInside main: %d", a);

    return 0;
}

void fun1()
{
    int a=23;                               // Function scope
    printf("\nInside fun1: %d", a);
}