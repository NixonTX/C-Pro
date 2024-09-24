// structure using typedef
#include<stdio.h>

typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}SS;            // its not variable. Its like a synonym || Nickname for 'struct student'.

int main(){
    SS s1={10, "Sha", 56.55};           // s1 is a variable/object
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);

    return 0;
}