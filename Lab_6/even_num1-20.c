//Write a program to find the even number from 1 to 20.....


#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=20;a++)
        if(a%2==0)
        {
            printf("%d\n",a);
        }
        return 0;
}

