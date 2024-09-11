//program to swap two variables without using third variable
#include<stdio.h>
int main()
{
    int a, b;
    printf("enter number for a");
    scanf("%d", &a);
    printf("enter number for b");
    scanf("%d", &b);
    
    //swaping values
    a= a - b;
    b= a + b;
    a= b - a;
    
    printf(" number in a=%d", a);
    printf("number in b=%d", b);
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}