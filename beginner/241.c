#include<stdio.h>
#include<stdlib.h>

int main(){
    enum direction{EAST=1, WEST, NORTH, SOUTH};

    printf("Choose your path:\n1 for EAST\n2 for WEST\n3 for NORTH\n4 for SOUTH\n");

    int num;

    scanf("%d", &num);

    switch(num)
    {
        case NORTH:
        printf("To North direction.");
        break;

        case WEST:
        printf("To West direction.");
        break;

        case SOUTH:
        printf("To South direction.");
        break;

        case EAST:
        printf("To East direction.");
        break;
    }

    return 0;
}