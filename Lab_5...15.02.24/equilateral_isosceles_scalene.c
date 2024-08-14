#include<stdio.h>
int main()
{
int a1, a2, a3;
printf("Enter the three arm: ");
scanf("%d%d%d",&a1,&a2, &a3);
if(a1>0 && a2>0 && a3>0)
{
  if(a1==a2 && a1==a3 && a2==a3)
{
printf("Equilateral");
}
else if (a1==a2 || a1==a3 || a2==a3)

{
printf("Isosceles");
}

else

{
printf("Scalene");
}
}
else
    printf("Invalid");

return 0;
}
