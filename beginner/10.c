//constants -can't be changed.//
#include <stdio.h>

int main()
{
    int num=7;
    printf("%d \n",num);
    num=16;                 //modifying//
    printf("%d \n",num);
    
    
    
    const int num2=4;       //const -cannot modify//
    printf("%d \n",num2);
//    num2=10;                 
    printf("%d \n",num2);

    return 0;
}

