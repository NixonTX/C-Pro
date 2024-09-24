// Accidental fun

#include <stdio.h>

int main(){
    int i, j, row;

    for(i=9; i<=9; i++){
        for(j=1; j<=i; j++){
            printf("*");
            if(j == 5)
            break;
        }
        printf("\n");
    }
    for(i=1; i<=4; i--){
        for(j=5; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }

    

    return 0;
}