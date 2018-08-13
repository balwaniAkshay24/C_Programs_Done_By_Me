#include<stdio.h>
#include<conio.h>
main ()
{
     int n=1, a=0;
     while (n<=10)
     {
         a=a+n;
         n++;  
     }
     printf("The sum of natural numbers from 1 to 10 is:%d",a);
     getch();
}
