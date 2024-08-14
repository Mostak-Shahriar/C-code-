#include<stdio.h>
int main()
{ int a,n,sum=0;
    printf("Enter the value of N=");
    scanf("%d",&n);
    for(a=0; a<=n; a++)
    {
        if(a%2==0)
        {
            sum=sum+a;
        }
    }
     printf("Summation of the even numbers is=%d",sum);
    return 0;

}

