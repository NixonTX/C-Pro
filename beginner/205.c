// Pointer to structure || Structure Pointer
#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

struct student s={5, "Dhavood", 75.55};

int main(){
    struct student * ptr = &s;

    printf("roll no is %d\n", ptr->rollno);
    printf("name is %s\n",ptr -> name);

    return 0;
}