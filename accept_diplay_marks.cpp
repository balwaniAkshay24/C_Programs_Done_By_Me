#include<stdio.h>
#include<conio.h>
main()
{
      char d;
      int r;
      float a, b, c, avg;
      printf("Enter your division:\n");
      scanf("%c", &d);
      printf("Enter your roll number:\n");
      scanf("%d", &r);
      printf("Enter your marks in Physics, Chemistry, Mathematics:\n");
      scanf("%f %f %f", &a, &b, &c);
      avg=(a+b+c)/3;
      printf("Your average marks in Physics, Chemistry and Mathematics is:%f", avg);
      getch();
}
