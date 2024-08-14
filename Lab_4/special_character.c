#include <stdio.h>
#include <ctype.h>
int main()
 {
   char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        printf("%c is an alphabet.\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("The input is special character.\n");
    }
    return 0;
}

