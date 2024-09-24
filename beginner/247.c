// Static storage class
/* ~ Stored in RAM
    ~ Scope -Within the Block
    ~ Lifetime -till the end of the program */

#include<stdio.h>

void display();

int main(){
    display();
    display();
    return 0;
}

void display()
{
    static int x=0;
    int y=10;
    x+=10;
    y--;

    printf("\nx = %d", x);
    printf("\ny = %d", y);

}