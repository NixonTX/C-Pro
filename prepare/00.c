#include<stdio.h>

int main() {
    char c = 'a';
    // char a = ''; // Inalid
    char *s = "a";

    if (c == *s) {  // *s dereferences the pointer to get the first character ('a')
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    } 

    return 0;
}

/* 
Comparing c == *s checks if the values of the characters are the same (97 == 97), so it prints "Equal".

'a' is a single char (1 byte).
"a" is a char array ({'a', '\0'}) with 2 bytes.

*/