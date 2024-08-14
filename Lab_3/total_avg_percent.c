//enter mark of five subjects and calculate the total'average and percentage..

#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,total,average,percentage;
    printf("Enter five subject number:");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;
    percentage=total*100/500;
    printf("Total=%f\n",total);
    printf("Average=%f\n",average);
    printf("Percentage=%f\n",percentage);
    return 0;
}
