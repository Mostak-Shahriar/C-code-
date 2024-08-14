#include<stdio.h>

int func1()
{
    int a;
    for(a=1;a<=10;a++)
        {
            printf("%d\n",a);
        }
        return 0;
}

int func2()
{
    int a,sum=0;
    for(a=1;a<=10;a++)
         sum=sum+a;
        {
        printf("Sum of the first 10 number=%d\n",sum);
        }
        return 0;
}

int func3()
{
    int a;
    for(a=1;a<=20;a++)
        if(a%2==0)
        {
            printf("%d\n",a);
        }
        return 0;
}

int func4()
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

int func5()
{
    int a,x;
    for(a=1;a<=10;a++)
  {
    x=a*2;
    printf("2*%d=%d\n",a,x);
  }

return 0;
}

int main()
{
    func1();
    func2();
    func3();
    func4();
    func5();
}

