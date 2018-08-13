#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, sum, mul, div, sub;
      printf("Enter any two numbers:\n");
      scanf("%d %d", &a, &b);
      sum=a+b;
      sub=a-b;
      mul=a*b;
      div=a/b;
      printf("Sum of %d and %d is %d\n.",a,b,sum);
      printf("The difference between %d and %d is %d\n.",a,b,sub);
      printf("The product of %d and %d is %d\n.",a,b,mul);
      printf("%d divided by %d is %d.",a,b,div);
      getch();
}
