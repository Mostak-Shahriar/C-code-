#include<stdio.h>
int main()
{
    float salary,total_salary;
    int gender;
    printf("If Female enter 2 if Male enter 1: ");
    scanf("%d",&gender);
    printf("Enter the salary: ");
    scanf("%f",&salary);
    if(gender==2)
   {
        if(salary>10000)

    {
         total_salary=salary*0.5;
         printf("Total salary=%f",total_salary);
    }
        else    //(salary<10000)
        {
            total_salary=salary*0.4;
            printf("Total salary=%f",total_salary);
        }
   }
    else
        {
            total_salary=salary*0.10;
           printf("Total salary=%f",total_salary);
        }
   return 0;

}

