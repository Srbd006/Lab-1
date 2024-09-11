//program to find ascii value of any character
#include<stdio.h>
int main()
{
   char ch;
   printf("enter your character");
   scanf("%c",&ch);
   printf("The ascii value of %c is =%d\n", ch, (int)ch);
   return 0;
}