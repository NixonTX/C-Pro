// the problem with gets
#include<stdio.h>
int main()
{
    char name[2];
    printf("Enter name: ");     // Buffer overflow - Won't mind the buffer (2 in this case). Prints the entire string the user enters.
    gets(name);
    printf("%s",name);

    return 0;
}