#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      float a, b, c, d;
      double r1, r2;
      printf("Enter the coefficient of quadratic equation:");
      scanf("%f %f %f", &a, &b, &c);
      d=(b*b)-(4*a*c);
      r1=((-b)-sqrt(d))/2*a;
      r2=((-b)+sqrt(d))/2*a;
      printf("The roots of the entered quadratic equation is: %lf and %lf", r1,r2);
      getch();
      }
      
