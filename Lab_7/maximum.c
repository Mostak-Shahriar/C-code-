#include <stdio.h>

int main()
{
int num1,num2;
printf("Enter the two number=");
scanf("%d%d",&num1,&num2);

switch(num1>num2)
{
case 1:
    printf("Num1 is large");
    break;
case 0:
    printf("Num2 is large");
    break;
}
    return 0;
}

