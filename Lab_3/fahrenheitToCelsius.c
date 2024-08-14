//Convert fahrenheit to centigrade

#include<stdio.h>
int main()
{
    float fahrenheit,c;
    printf("Enter Fahrenheit value=");
    scanf("%f",&fahrenheit);
    c=(fahrenheit-32)*5/9;
    printf("Celsius value is=%f",c);
    return 0;
}
