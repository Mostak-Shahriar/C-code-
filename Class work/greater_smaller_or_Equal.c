#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two number: ");
    scanf("%d%d",&num1,&num2);
   if(num1==num2)
    {
        printf("Equal to each other");
    }
   else if(num1>num2)
    {
        printf("Greater than other");
    }
    else
    {
        printf("Smaller than other");
    }
    return 0;
}
