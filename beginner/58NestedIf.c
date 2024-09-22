//Nested if
#include<stdio.h>
int main()
{
    int age, salary;
    printf("Enter age and salary: ");
    scanf("%d%d",&age,&salary);

    if (age>50)
    {
        if(salary<60000)
        {
            salary=salary+1000;
            printf("salary is: %d",salary);
        }
        else
        {
            salary=salary+5000;
            printf("salary is: %d",salary);
        }
    }
    else
    {
        salary=salary+3000;
    }
    printf("\nsalary is now: %d",salary);
    printf("\nEnd of program.");

    return 0;
}