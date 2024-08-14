#include<stdio.h>
#include<math.h>
int main()
{
 int p,t;
 float CI,r;
 printf("Enter principal, rate and time:");
 scanf("%d%f%d",&p,&r,&t);
 CI=p*pow((1+r/100),t);
 printf("Compound interest is =%f",CI);
 return 0;
}
