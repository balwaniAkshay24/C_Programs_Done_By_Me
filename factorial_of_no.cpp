#include<stdio.h>
#include<conio.h>
main ()
{
     int a,b=1;
     printf("Enter any number:");
     scanf("%d",&a);
     while(a>=1)
     {
           b=b*a;
           a--;
     }
     printf("\nThe factorial of the entered number is:%d", b);
getch();
}
