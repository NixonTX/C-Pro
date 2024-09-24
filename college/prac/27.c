#include <stdio.h>

struct stu
{
    int id;
    char name[20];
    float mark;
};

struct stu s[3];

int main(){
    printf("enter id, name, mark: ");
    for(int i=0; i<3; i++){
        scanf("%d %s %f", &s[i].id, &s[i].name, &s[i].mark);
    }

    for(int i=0; i<3; i++){
        printf("%d %s %f\n", s[i].id, s[i].name, s[i].mark);
    }

    return 0;
}