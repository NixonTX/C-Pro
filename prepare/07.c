// String reverse without strrev, with simple while

#include<stdio.h>
#include<string.h>
int main() {
    char str[] = "HanikA";

    int size = strlen(str);
    printf("Length of string: %d\n", size);

    int i = size - 1;
    printf("i is %d\n", i);

    while(i >= 0) {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}