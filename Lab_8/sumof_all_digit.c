#include<stdio.h>
int main()
{
int num,rem,sum=0;
printf("enter a number:");
scanf("%d",&num);
while(num!=0)
{ rem=num%10;
num=num/10;
sum=sum+rem;
}
printf("Sum of the digits is= %d",sum);
return 0;
}

