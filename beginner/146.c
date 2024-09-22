#include<stdio.h>
int main(){
    char str[] = "ABCDEFGH__IJK123456789";
    char *ptr = str;
    printf("1.%c",*ptr);
    printf("\n2.%c",*(ptr++ +1));
    printf("\n2.1.%c",*ptr);
    printf("\n3.%c",*((ptr-- +5)-1)+3);
    printf("\n4.%c",*(++ptr+10)-2);
    printf("\n5.%c %c %c",*ptr, *++ptr, *--ptr);

    return 0;
}