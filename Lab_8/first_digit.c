#include<stdio.h>
int main()
{
int num,rem;
printf("enter a number:");
scanf("%d",&num);
while(num/10!=0) {
num=num/10;
}
printf("First digit is= %d",num);
return 0;
}

