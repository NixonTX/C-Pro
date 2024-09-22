// Enumeration
#include<stdio.h>
#include<stdlib.h>

int main(){
    enum shape{circle, triangle, rectangle};

    printf("choose a shape:\n0 for circle\n1 for triangle\n2 for rectangle\n");

    int ch;

    scanf("%d", &ch);
    switch(ch)
    {
        case circle:
        printf("You have chosen circle");
        break;

        case triangle:
        printf("You have chosen triangle");
        break;

        case rectangle:
        printf("You have chosen rectangle");
        break;

        default:
        printf("check again.");
        break;
    }

    return 0;
}