#include<stdio.h>

int main()
{
    int marks;
    printf ("Enter the marks:");
    scanf ("%d", &marks);
    if (marks >100 )
    {
        printf ("Given marks exceeding your 100 marks limit");
    }
    if (marks >=90 && marks <= 100)
    {
        printf ("Grade A");
    }
    else if (marks >=87 && marks <= 89)
    {
        printf ("Grade B+");
    }
    else if (marks >=84 && marks <= 86)
    {
        printf ("Grade B");
    }
    else if (marks >=80 && marks <= 83)
    {
        printf ("Grade B-");
    }
    else if (marks >=77 && marks <= 79)
    {
        printf ("Grade C+");
    }
    else if (marks >=74 && marks <= 76)
    {
        printf ("Grade C");
    }
    else if (marks >=70 && marks <= 73)
    {
        printf ("Grade C-");
    }
    else if (marks >=67 && marks <= 69)
    {
        printf ("Grade D+");
    }
    else if (marks >=64 && marks <= 66)
    {
        printf ("Grade D");
    }
    else if (marks >=60 && marks <= 63)
    {
        printf ("Grade D-");
    }
    else
    {
        printf ("Fail");
    }
    return 0;
}

