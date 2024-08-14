//find the perimeter and area of circle with agiven radius..

#include <stdio.h>
#include <math.h>

int main()
{
    float r,Area,perimeter;
    printf("Enter the value of r:");
    scanf("%f",&r);
    Area=3.1416*r*r;
    perimeter=2*3.1416*r;
    printf("Area of Circle=%f\n",Area);
    printf("Perimeter of the circle is=%f",perimeter);

    return 0;
}

