// Accidental collection(symbols)

#include<stdio.h>

int main(){
    int i, j;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j--){
            printf("%c ", 64+j);     // ASCII value
        }
        printf("\n");
    }

    return 0;
}