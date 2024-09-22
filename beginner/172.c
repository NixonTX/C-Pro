// Passing array as an argument
// finding average of elements in the array.
#include<stdio.h>

int avg(int [], int);

int main(){
    float average;
    int marks[5] = {10, 20, 30, 40, 50};
    average = avg(marks, 5);
    printf("Avg is %f", average);
    return 0;
}

int avg(int marks[], int a){        // Arrays always passed by Call by Reference
    int i, sum=0;
    float average=0;
    for(i=0; i<a; i++){
        sum= sum+marks[i];
    }
    average= sum/a;
}