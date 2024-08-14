//find the perimeter and area of rectangle with given length and breadth..

#include<stdio.h>
int main()
{
    int l,w,area,perimeter;
    printf("Enter the value of length:");
    scanf("%d",&l);
    printf("Enter the value of bredth:");
    scanf("%d",&w);
    perimeter=2*(l+w);
    area=l*w;
    printf("Area of the rectangle is=%d\n",area);
    printf("Perimeter of the rectangle is=%d",perimeter);
    return 0;
}

