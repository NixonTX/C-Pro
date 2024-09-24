// the problem with scanf
#include<stdio.h>
int main()
{
    char name[5];
    printf("Enter name: ");
    scanf("%s",name);   // Won't mind the buffer (5 in this case). Prints the entire string the user enters.
    printf("%s",name);  // also, break when a space occurs.

    return 0;
}