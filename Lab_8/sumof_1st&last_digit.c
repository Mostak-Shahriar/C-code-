#include<stdio.h>
int main()
{
int num,rem,sum=0;
printf("enter a number:");
scanf("%d",&num);
rem=num%10;
printf("last digit is =%d\n",rem);
while(num/10!=0)
{
num=num/10;
}
printf("first digit is=%d\n",num);
sum=sum+rem+num;
printf("Sum of first and last digit is =%d\n",sum);
return 0;
}

