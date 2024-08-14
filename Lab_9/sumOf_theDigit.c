
#include <stdio.h>
int main()
{
 int n,x, sum=0;
 printf ("Enter the number:");
 scanf ("%d", &n);
 while (n)
 {
 x=n%10;
 sum+=x;
 n=n/10;
 }
 printf ("sum=%d", sum);
 return 0;
}
