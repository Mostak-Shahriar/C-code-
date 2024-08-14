#include <stdio.h>

int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1:
    printf("Number is even");
    break;
        case 0:
            printf("Number is odd");
            break;
    }
    return 0;
}
