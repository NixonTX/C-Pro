#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

struct student s[2];

int main(){
    int i;

    struct student *ptr = s;

    printf("enter details: \n");
    for(i=0; i<2; i++){
        scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
    }

    printf("\nHere we go: \n");
    for(i=0; i<2; i++){
        printf("%d %s %f\n", ptr ->rollno, ptr->name, ptr->marks);
        ptr++;
    }
    return 0;
}