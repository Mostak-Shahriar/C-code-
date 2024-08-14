#include<stdio.h>
int main()
{
    int i,x,initial=0,sum=1,rows;
    printf("enter the rows:");
    scanf("%d",&rows);

    for(i=0; i<=rows; i++)
    {
        for(x=1; x<=i; x++)
        {

            printf("%d ",sum);
            sum=initial+sum;
            initial=sum;

        }
        printf("\n");
    }



    return 0;

}

