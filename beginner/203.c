// Array of structure
#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

struct student s[3];

int main(){
    int i;
    printf("enter rollno, name & mark: ");
    for(i=0; i<3; i++){
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(i=0; i<3; i++){
        printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);      // Accessing the members using variable.
    }

    return 0;
}