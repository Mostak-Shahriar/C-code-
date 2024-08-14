#include<stdio.h>
int main()
{
    int celsius,f;
    printf("Enter Celsius value= ");
    scanf("%d",&celsius);
    f=celsius*9/5+32;
    printf("Fahrenheit value is=%d",f);
    return 0;
}
