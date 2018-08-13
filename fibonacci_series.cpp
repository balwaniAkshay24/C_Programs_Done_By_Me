#include<stdio.h>
#include<conio.h>
main ()
{
     int n1=0, n2=1, n3, a,i;
     printf("Enter the lenght of Fibonacci Series to be displayed:");
     scanf("%d", &a);
     printf("\n%d \n%d",n1,n2);
     for(i=0;i<a-2;i++)
     {
                       n3=n1+n2;
                       printf("\n%d", n3);
                       n1=n2;
                       n2=n3;
     }
     getch();
}
