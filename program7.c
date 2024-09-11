//to calculate the area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,ar;
    printf("length of one side");
    scanf("%f",&a);
    printf("length of second side");
    scanf("%f",&b);
    printf("length of third side");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s)*(s-a)*(s-b)*(s-c);
    printf("semi perimeter=%f",s);
    printf("area of triangle=%f",ar);
}