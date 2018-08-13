#include<stdio.h>
#include<conio.h>
main()
{
      int x, a=0, b=0, c=0;
      printf("Enter any number:");
      scanf("%d",&x);
      while(x>0)
      {
                b=x%10;
                c=c*10+b;
                x=x/10;
      }
      printf("The entered number in words is:");
      while(c>0)
      {
           a=c%10;
           c=c/10;
           switch(a)
           {
                    case 0:printf(" Zero");
                           break;
                    case 1:printf(" One");
                           break;
                    case 2:printf(" Two");
                           break;
                    case 3:printf(" Three");
                           break;
                    case 4:printf(" Four");
                           break;
                    case 5:printf(" Five");
                           break;
                    case 6:printf(" Six");
                           break;
                    case 7:printf(" Seven");
                           break;
                    case 8:printf(" Eight");
                           break;
                    case 9:printf(" Nine");
                           break;
           }
      }
getch();
}
