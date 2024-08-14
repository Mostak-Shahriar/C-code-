#include <stdio.h>

int main()
{
    int numerator,denominator;
    float result;

    printf("Enter numerator and denominator: ");
    scanf("%d%d",&numerator,&denominator);

    if (denominator != 0)
        {
        result=(float)numerator/denominator;
        printf("Result of division: %.2f",result);
        }
    else
    {
        printf("Error:");
    }

    return 0;
}
