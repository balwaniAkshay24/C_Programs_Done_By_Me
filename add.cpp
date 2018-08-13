#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, total;
      printf("Enter any two numbers for addition:\n");
      scanf("%d %d", &a, &b);
      total=a+b;
      printf("Sum of %d and %d is %d.",a,b,total);
      getch();
}
