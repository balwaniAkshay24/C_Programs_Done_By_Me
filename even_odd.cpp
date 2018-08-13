#include<stdio.h>
#include<conio.h>
main()
{
      int a, b;
      printf("Enter a number:");
      scanf("%d", &a);
      b=a%2;
      (b==0)? printf("The number enetered is even."):printf("The number entered is odd.");
      getch();
}
      
