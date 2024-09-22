// Memory Leak 
/* We have this prob in c & c++
    ~ Occurs due to improper use of Heap memory
    ~ We shoulk manually release the memory using free() function. */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int ch=1;
    int *ptr;

    while(ch<50)
    {
        printf("memory leak demo\n");
        ptr= (int*)malloc(40000*sizeof(int));

        printf("\ncontinue?? press 1 for continue");
        scanf("%d", &ch);
        
        free(ptr);
    }

    return 0;
}