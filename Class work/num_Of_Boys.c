#include<stdio.h>
int main()
{
    int weight,height,num_boys,count=0;
    printf("Enter the weight(kg) and height(cm): ");
    scanf("%d%d",&weight,&height);
    if(weight<50 && height>170)
    {
        num_boys=count+1;
        printf("The number of boys is=%d",num_boys);
    }

    return 0;
}
