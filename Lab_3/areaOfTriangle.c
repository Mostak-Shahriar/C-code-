//find the area of equilateral triangle...

#include <stdio.h>
#include <math.h>

int main()
{
    float x,Area;
    printf("Enter the value of x:");
    scanf("%f",&x);
    Area=(sqrt(3)/4)*(x*x);
    printf("Area of Triangle=%f",Area);

    return 0;
}
