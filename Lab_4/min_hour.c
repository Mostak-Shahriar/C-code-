#include<stdio.h>
int main()
{
    int totalMin,hour,min;
    printf("Enter total minute=");
    scanf("%d",&totalMin);
    hour=totalMin/60;
    min=totalMin%60;
    printf("Hour=%d\nMin=%d",hour,min);
    return 0;
}
