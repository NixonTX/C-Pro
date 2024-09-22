#include<stdio.h>
int avg(int [], int);

int main(){
    int marks[5] = {10, 20, 30, 40, 50};
    int size = sizeof(marks)/sizeof(marks[0]);
    int average = avg(marks, size);

    printf("\nAverage= %d\n", average);
    //printf("Inside main, size of array is (in bytes): %d",sizeof(marks));

    return 0;
}

int avg(int marks1[], int size){
    int i, sum=0, average=0;
    for(i=0; i<size; i++)
    {
        sum= sum+marks1[i];
    }
    average=sum/size;
    //printf("\nInside avg fucntion, size of array is(in bytes): %d",sizeof(marks1));
    return average;
}