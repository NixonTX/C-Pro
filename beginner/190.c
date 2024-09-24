#include<stdio.h>

void Hindi(int a) {printf("Namaste");}
void English(int b) {printf("Hi");}
void Tamil(int c) {printf("Vanakam");}

int main(){
    int c;

    void(*Mptr[10])(int )={Hindi, English, Tamil};

    printf(" 0 Hindi\n 1 English\n 2 Tamil\n");
    printf("enter your choice: ");  scanf("%d",&c);

    (*Mptr[c])(c);

    return 0;
}