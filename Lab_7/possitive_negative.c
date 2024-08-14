#include <stdio.h>

int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    switch(num>0)
    {
    case 1:
        printf("Number is possitive");
        break;
    case 0:
        switch(num<0)
        {
        case 1:
            printf("Number is negative");
            break;
        case 0:
            printf("Number is zero");
            break;
        }

    }

    return 0;
}

