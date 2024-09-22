#include <stdio.h>

struct stu
{
    int rollno;
    char name[20];
    float mark;
}s1,s2;

int main(){
    struct stu s1={1, "massy", 55.5};

    printf("%d %s %f", s1.rollno, s1.name, s1.mark);

    printf("enter valu into s2: ");
    scanf("\n%d %s %f", &s2.rollno, &s2.name, s2.mark);

    return 0;
}