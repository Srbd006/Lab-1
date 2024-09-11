//to swap two variables using third variables
#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("enter number for a");
  scanf("%d",&a);
  printf("\n enter number for b");
  scanf("%d",&b);
  temp=a;
  a=b;
  b= temp;
  printf("value of a=%d",a);
  printf("value of b=%d",b);
  return 0;
    
    
    
    
    
    
    
    
    
}