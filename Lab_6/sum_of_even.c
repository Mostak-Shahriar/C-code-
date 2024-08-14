//Write a program to calculate the sum of even number from 1 to 20.....


#include<stdio.h>
int main()
{
    int a,sum=0;
    for(a=1;a<=20;a++)
        if(a%2==0)
             sum=sum+a;
        {
        printf("Sum of even number from 1-20=%d\n",sum);
        }
        return 0;
}


