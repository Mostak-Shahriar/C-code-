#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the range: ");
 scanf("%d", &n);
 for (i=1; i<=n; i++)
 {
 int flag=0;
 if (i<2)
 {
 flag=1;
 }
 else if (i==2)
 {
 flag = 0;
 printf("%d\t", i);
 }
 else
 {
 for (j=2; j<i; j++)
 {
 if (i%j==0)
 {
 flag = 1;
break;
 }
 }
 if (flag==0)
 {
 printf("%d\n", i);
 }
 }
 }
 return 0;
}
