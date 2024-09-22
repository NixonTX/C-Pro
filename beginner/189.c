// Application of function pointer
// Array of Fun. Pointer
#include<stdio.h>

void add(int a, int b)  { printf("Addition is: %d\n", a+b);}
void sub(int a, int b)  { printf("Subtraction is: %d\n", a-b);}
void mul(int a, int b)  { printf("Multiplication is: %d\n", a*b);}
void div(int a, int b)  { printf("Division is: %d\n", a/b);}


int main(){
    int ch, a, b;
    void(*fptr[10])(int, int)={add, sub, mul, div};

    printf(" 0 for add\n 1 for sub\n 2 for mul\n 3 for div\n");
    printf("Enter choice: ");   scanf("%d", &ch);
    printf("Enter a&b: ");      scanf("%d %d",&a, &b);
 
    /*switch(ch)
    {
        case 0: add(a, b); break;
        case 1: sub(a, b); break;
        case 2: mul(a, b); break;
        case 3: div(a, b); break;
        default : printf("enter valid choice.");
    }   */

    (*fptr[ch])(a, b);

    return 0;
}