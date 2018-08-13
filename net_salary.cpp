#include<stdio.h>
#include<conio.h>
main()
{
      float bs,da,hra,gs,pf,ns;
      printf("Enter your basic salary:");
      scanf("%f", &bs);
      da=bs*0.25;
      hra=bs*0.15;
      gs=bs+da+hra;
      pf=gs*0.10;
      ns=gs-pf;
      printf("Your net salary is %f", ns);
      getch();
      } 
