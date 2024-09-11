//to calculate the cutoff marks of a student
#include<stdio.h>
int main()
{
   float CM,M,P,C,E;
   printf("marks in mathematics of a student");
   scanf("%f",&M);
   printf("marks in physics of a student");
   scanf("%f",&P);
   printf("marks in chemistry of a student");
   scanf("%f",&C);
   printf("marks in entrance examination of a student");
   scanf("%f",&E);
   CM=M/2+P/2+C/2+E;
    printf("cutoff marks of a student=%f",CM);
    return 0;
}