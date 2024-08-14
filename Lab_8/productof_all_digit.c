#include<stdio.h>
int main()
{
int num,rem,sum=1;
printf("enter a number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
num=num/10;
sum=sum*rem;
}
printf("Product of all digit is= %d",sum);


return 0;
}

