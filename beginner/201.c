#include<stdio.h>

struct student{
    int rollno;     // int - 4
    float marks;    // float - 4
    char name[20];  // 20
};

int main(){
    struct student s1;

    printf("%d",sizeof(s1));

    return 0;
}