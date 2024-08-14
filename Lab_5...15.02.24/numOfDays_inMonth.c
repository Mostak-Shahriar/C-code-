#include<stdio.h>
int main()
{
    int month;
    printf("Enter number of month: ");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7
       || month==8 || month==10 || month==12)
    {
        printf("Number of days of the month is 31");
    }

    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("Number of days of the month is 30");
    }
    else if(month==2)
    {
      printf("Number of days of the month is 28 OR 29");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}

