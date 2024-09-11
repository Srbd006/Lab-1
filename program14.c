//to check the given character is capital or small
#include<stdio.h>
int main()
{
  char ch;
  printf("enter your character");
  scanf("%c",&ch);
  printf("ascii value of a character=%c",ch,(int)ch);
  if((int)ch>97&&(int)ch<123)
  {
     printf("small case letter"); 
  }   
  else if((int)ch>64&&(int)ch<91)    
  {
   printf("capital letter");   
  }  
  else if((int)ch>32&&(int)ch<48)
  {
      printf("special symbol");
  }
  else 
  {
     printf("digits"); 
  }  
}