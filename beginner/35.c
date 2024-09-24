//Logical Operators AND &&, OR ||, NOT !
#include<stdio.h>
int main(){
    int a=10, b=5;
    printf("\n%d",a && b);      //AND && - Both have to be True
    printf("\n%d",1 && 1);
    printf("\n%d",0 && 0);
    printf("\n%d",a && 0);
    printf("\n-----");

    printf("\n%d",a > b || b==5);       // OR - Any one should be True
    printf("\n%d",a > b || b==4);
    printf("\n%d",a < b || b==4);
    printf("\n-----");

    printf("\n%d",!5);      // NOT - just remember NOT gate
    printf("\n%d",!0);

    return 0;
}