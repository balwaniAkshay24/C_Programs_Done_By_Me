#include<stdio.h>
#include<conio.h>
main()
{
      char a, b;
      printf("Enter any character in upper case:\n");
      scanf("%c", &a);
      a=a;
      b=a+32;
      printf("The entered character in lower case is:%c", b);
      getch();
}
