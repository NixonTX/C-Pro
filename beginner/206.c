#include<stdio.h>
struct Phone
{
    float price;
    char model[10];
    int serialNo;
};

struct Phone P[2];

int main(){
    int i;

    struct Phone * PR =P;

    printf("Details: \n");
    for(i=0; i<2; i++){
        scanf("%f%s%d",&P[i].price,&P[i].model,&P[i].serialNo);
    }

    printf("\nList\n");
    for(i=0; i<2; i++){
        printf("%f %s %d\n",PR->price,PR->model,(*PR).serialNo);
        PR++;
    }

    return 0;
}