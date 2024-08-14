#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if(ch>='A'|| ch<='Z' && ch>='a' || ch<='z')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
           ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("Vowel");
        }
        else if(ch>='A'|| ch<='Z' && ch>='a' || ch<='z')
           {
             printf("Consonant ");
           }
        else
        {
             printf("Special chracter");
        }

            return 0;
    }
}
