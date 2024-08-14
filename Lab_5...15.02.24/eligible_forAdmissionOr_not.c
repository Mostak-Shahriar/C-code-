#include<stdio.h>
int main()
{
    int MATHS,PHY,CHEM;
    printf("Enter the number of MATHS PHY CHEM: ");
    scanf("%d%d%d",&MATHS,&PHY,&CHEM);
    if (MATHS>=65 && PHY>=55 && CHEM>=50)
    {
        if((MATHS+PHY+CHEM)>=180 || (MATHS+PHY)>=140)
        {
            printf("The student is eligible");
        }
    }
    else
    {
        printf("The student is Not Eligible");
    }
    return 0;
}
