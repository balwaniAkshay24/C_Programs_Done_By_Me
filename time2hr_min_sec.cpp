#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, c, d, f;
      printf("Enter time is seconds:");
      scanf("%d", &a);
      b=a/3600;
      c=a%3600;
      d=c/60;
      f=c%60;
      printf("The entered time is %d hours %d minutes %d seconds",b,d,f);
      getch();
      } 
      
