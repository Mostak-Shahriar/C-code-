#include<stdio.h>
#include<math.h>
int main ()
{
 int p,t;
 float SI,r;
 printf("Enter Principal,time and rate:");
 scanf("%d%d%f",&p,&t,&r);
 SI=(p*t*r)/(float)100;
 printf("Simple interest is %f",SI);
 return 0;
}
