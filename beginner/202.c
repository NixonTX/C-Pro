#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
}s3={3};

int main(){
    struct student s1={1, "Kalam", 90.9};
    struct student s2;
    //struct student s2={2, "Krish", 22.90};
    printf("enter info for s2: ");
    scanf("%d %s %f",&s2.rollno, &s2.name, &s2.marks);
    //struct student s2;
    //s2=s1;

    printf("Info for s1");
    printf("\n%d %s %f", s1.rollno, s1.name, s1.marks);
    printf("\nInfo for s2");
    printf("\n%d %s %f", s2.rollno, s2.name, s2.marks);
    printf("\nInfo for s3");
    printf("\n%d %s %f", s3.rollno, s3.name, s3.marks);

    return 0;
}