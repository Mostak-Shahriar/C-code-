#include <stdio.h>
int main()
{
    int ang1, ang2, ang3, totalAngle;
    printf(" Enter Three Angles of A Triangle: ");
    scanf("%d%d%d", &ang1, &ang2, &ang3);
    totalAngle = ang1+ang2 + ang3;

    if(ang1>0 && ang2>0 &&ang3>0 && totalAngle == 180)
    {
        printf ("This is a Valid Triangle");
    }
    else
    {
        printf ("This is not a Valid Triangle");
    }
    return 0;
}
