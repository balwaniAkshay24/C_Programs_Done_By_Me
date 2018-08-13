#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, c;
      printf("Enter the number of days:");
      scanf("%d", &a);
      c=a/30;
      b=a%30;
      if(b==0)
      {
              printf("The number of months is %d", c);
      }
      else
      {
                  printf("The number of months is %d and the number of days is %d.", c,b);
      }
      getch();
      }
      
