#include <stdio.h>

int main()
{
    int num,square;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num < 10)
        {
        square=num*num;
        printf("Square of the number: %d\n",square);
        }
   else
   {
       printf("Error");
   }
    return 0;
}

