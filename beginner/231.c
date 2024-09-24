#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    int n, i;
    printf("enter the no. of students:\n");
    scanf("%d", &n);

    struct student *ptr;

    ptr=(struct student*)malloc(n*sizeof(struct student));

    printf("enter info. of students; 1-rollno, 2-name, 3-mark\n");
    for(i=0; i<n; i++){
        scanf("%d %s %f", &(ptr+i)-> rollno, &(ptr+i)-> name, &(ptr+i)->marks);
    }

    printf("The info.s as follows:\n");
    for(i=0; i<n; i++){
        printf("%d %s %f\n",(ptr+i)-> rollno, (ptr+i)-> name, (ptr+i)->marks);
    }

    free(ptr);

    return 0;
}
