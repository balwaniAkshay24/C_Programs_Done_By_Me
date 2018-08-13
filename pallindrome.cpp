#include<stdio.h>
#include<conio.h>
main()
{
      int a, b=0, c=0, d;
      printf("Enter any number:");
      scanf("%d", &a);
      d=a;
      while(a>0)
      {
                b=a%10;
                c=c*10+b;
                a=a/10;
      }
      if(d==c)
      {
              printf("The entered number is a pallindrome.");
      }
      else
      {
          printf("The entered number is not a pallindrome.");
      }
      getch();
}
