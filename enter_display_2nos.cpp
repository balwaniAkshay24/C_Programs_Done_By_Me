#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, c;
      printf("Enter two numbers:");
      scanf("%d %d", &a, &b);
      c=a;
      a=b;
      b=c;
      printf("The number entered are %d and %d.", a, b);
      getch();
}
      
