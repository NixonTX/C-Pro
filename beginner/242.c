#include<stdio.h>
int main(){
    enum xenum{c, cpp, java, swift, python};

    enum yenum{xenum};

    //enum xenum var;
    enum yenum var;

    printf("%d", sizeof(var));

    return 0;
}