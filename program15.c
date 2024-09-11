//to read marks of five subject and give output division
#include<stdio.h>
int main()
{
 int m,p,c,t,e,sum=0;
 printf("marks of maths");
 scanf("%d",&m);
 printf("marks of physics");
 scanf("%d",&p);
 printf("marks of chemistry");
 scanf("%d",&c);
 printf("marks of telugu");
 scanf("%d",&t);
 printf("marks of english");
 scanf("%d",&e);
 sum=m+p+c+e+t;
 printf("total marks=%d",sum);
 if(sum>500)
 {
     printf("division H");
 }
 else
 {
     printf("division I");
 }
}