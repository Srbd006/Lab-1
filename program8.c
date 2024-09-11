//time taken by earth revolution into days
#include<stdio.h>
int main()
{
  float sec=31558150,day,hou,min;
  day=sec/86400;
  hou=sec/3600;
  min=sec/60;
  printf("no of seconds taken by earth=%f",sec);
  printf("number of days=%f",day);
  printf("number of hours=%f",hou);
  printf("number of minutes=%f",min);
  return 0;
}