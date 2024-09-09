// program to calculate simple intrest
#include<stdio.h>
int main()
{
	float p,t,r,s;
	printf("enter your principal amount");
	scanf("%f", &p);
	printf("enter your time");
	scanf("%f", &t);
	printf("enter your rate");
	scanf("%f", &r);
	s=(p*t*r)/100;
	printf("simple intrest=%f", s);
	return 0;

	
	
	
	
	
	
	
	
}