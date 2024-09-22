// NULL Pointer -Better to initialize a pointer with NULL rathar than leaving it uninitialized.(Notes OCT 18 2016)
#include<stdio.h>
int main(){
    int a=3;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    //int *ptr1;
    //int *ptr2;

    /*if(ptr1==NULL){ 
        printf("this is null pointer");
    }
    else{
        printf("%d\n",*ptr1);
    }*/
    if(ptr1==ptr2){
        printf("both are NULL pointers");
    }
    else{
        printf("%d\n",*ptr1);
    }

    return 0;
}