//find the third angle of a triangle if two angles are given..

#include<stdio.h>
int main()
{
    float angle1,angle2,angle3;
    printf("Enter the two angles:");
    scanf("%f%f",&angle1,&angle2);
    angle3=180-(angle1+angle2);
    printf("Angle3=%f",angle3);
    return 0;
}
