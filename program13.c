//to find whether number is even or odd
#include<stdio.h>
int main()
{
  int num;
  printf("enter your number");
  scanf("%d",&num);
  if (num%2==0)
  {
      printf("even number");
  }
  else
  {
    printf("odd number");  
      
  }
  return 0;    
}