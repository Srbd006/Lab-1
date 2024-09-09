//program to calculate total marks of subject and pertcentage of marks
#include<stdio.h>
int main()
{
	float m,s,e,t,h,to,p;
	printf("marks of maths");
	scanf("%f",&m);
	printf("\n marks of science");
	scanf("%f",&s);
	printf("\n marks of english");
	scanf("%f",&e);
	printf("\n marks of telugu");
	scanf("%f",&t);
	printf("\n marks of hindi");
	scanf("%f",&h);
	to=m+s+e+t+h;
	p=(to/5);
	printf("\n total marks=%f",to);
	printf("\n percentage=%f",p);
	return 0;
	
	
	
	
	
	
	
	
	
}
