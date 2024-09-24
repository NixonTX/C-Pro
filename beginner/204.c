#include<stdio.h>

struct House
{
    int no;
    char name[20];
    char sigil[20];
    int No_of_dragons;
    float inventory;
};

struct House H[4];

int main(){
    int i;

    printf("enter the details: ");
    for(i=0; i<4; i++){
        scanf("%d%s%s%d%f",&H[i].no,&H[i].name,&H[i].sigil,&H[i].No_of_dragons,&H[i].inventory);
    }
    printf("\nTA DAA--\n");
    for(i=0; i<4; i++){
        printf("%d %s %s %d %f\n",H[i].no,H[i].name,H[i].sigil,H[i].No_of_dragons,H[i].inventory);
    }
    return 0;
}