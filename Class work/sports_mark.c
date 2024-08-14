#include<stdio.h>
int main ()
{
    char category;
    float marks,bonus_marks,total_marks;
    printf("Enter the category (Sports=S)=");
    scanf("%c",&category);
    if(category=='S' || category=='s')
    {
        printf("Enter the marks: ");
        scanf("%f",&marks);
        printf("Enter the bonus marks: ");
        scanf("%f",&bonus_marks);
        total_marks=marks+bonus_marks;
        printf("Total marks is=%.2f",total_marks);
    }
    return 0;

}
