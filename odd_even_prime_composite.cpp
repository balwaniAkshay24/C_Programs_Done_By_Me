#include<stdio.h>
#include<conio.h>
main()
{
      int x,y,a=0,b=0,c=0,i;
      printf("Enter any number:");
      scanf("%d",&x);
      printf("Press 1 to check if the number is odd or even.\nPress 2 to check if the number entered is prime or composite.");
      scanf("%d",&y);
      switch(y)
      {
               case 1: a=x%2;
               if (a==0)
               {
                        printf("The number entered is even.");
               }
               else
               {
                   printf("The number entered is odd.");
               }
               break;
               
               case 2:for(i=1;i<x;i++)
               {
                      b=x%i;
                      if(b==0)
                      {
                              c++;}
               }
                      if (c==1)
                      {            
                                  printf("The entered number is prime.");
                      }
               else
               {
                   if(c==0)
                   { 
                           printf("The given number is niether prime or composite.");
                   }
                   else
                   {
                   printf("The given number is composite.");
                   }
               }
               break;
               default:printf("Please enter 1 or 2.");
      }
      getch();
 }
      
                                  
               
