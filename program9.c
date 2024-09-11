//to convert given seconds into no. of days
#include<stdio.h>
int main()
{
  int sec,day,hou,min;
  printf("number of seconds given");
  scanf("%d",&sec);
  day=sec/86400;
  hou=sec/3600;
  min=sec/60;
  printf("numer of days=%d",day);
  printf("number of hours=%d",hou);
  printf("number of minutes=%d",min);
  return 0;  
 }   
    
  
  
  
  
  
  
  
  
  
  
    
