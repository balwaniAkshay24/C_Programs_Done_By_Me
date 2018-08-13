#include<stdio.h>
#include<conio.h>
main ()
{
     int a, b, c=0;
     printf("Enter any number:");
     scanf("%d", &a);
     while(a>0)
     {
               b=a%10;
               c=c*10+b;
               a=a/10;
     }
     printf("\nThe reverse of the entered number is:%d",c);
getch();
}
