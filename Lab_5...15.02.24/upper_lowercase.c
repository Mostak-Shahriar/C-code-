#include<stdio.h>
 int main()
  {
  char alphabet;
  printf("Enter the Alphabet: ");
  scanf("%c",&alphabet);
  if(alphabet>='A' && alphabet<='Z')
   {
    printf("The alphabet is Uppercase");
   }
   else if(alphabet>='a' && alphabet<='z')
   {
   printf("The alphabet is Lowercase");
   }
    return 0;
   }
