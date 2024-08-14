#include <stdio.h>
int main()
{
    int num1,num2;
    char a;
    float res;
    printf("Enter the two number= ");
    scanf("%d%d",&num1,&num2);
    printf("Enter the charecter=");
    scanf(" %c",&a);
    switch(a)
    {
    case '+':
        res=num1+num2;
        printf("Addition result is=%f",res);
        break;
    case '-':
        res=num1-num2;
        printf("Subtraction result is=%f",res);
        break;
    case '*':
        res=num1*num2;
        printf("Multiplication result is=%f",res);
        break;
    case '/':
        switch(num2!=0)
       {
            case 1:
        res=num1/(float)num2;
        printf("Division result is=%f",res);
        break;
    case 0:
        printf("Invalid");
        break;
       }
    }
    return 0;
}

