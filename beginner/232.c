#include<stdio.h>
#include<stdlib.h>

struct car
{
    int modelno;
    char name[20];
    float price;
};

int main(){
    int n, i;

    printf("Enter no. of cars: ");
    scanf("%d", &n);

    struct car *ptr;

    ptr= (struct car*)malloc(n*sizeof(struct car));

    printf("enter the details(1.modelno, 2.name, 3.price):\n");
    for(i=0; i<n; i++){
        scanf("%d%s%f", &(ptr+i)->modelno, &(ptr+i)->name, &(ptr+i)->price);
    }

    printf("List-\n");
    for(i=0; i<n; i++){
        printf("%d %s %f\n", (ptr+i)->modelno, (ptr+i)->name, (ptr+i)->price);
    }

    free(ptr);

    printf("\nDone successfully using malloc() function.");

    return 0;

}