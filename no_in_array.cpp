#include<stdio.h>
#include<conio.h>
main()
{
      int arr[10],i,j,a,b=0;
      printf("Enter an array:");
      for(i=0;i<10;i++)
      {
      scanf("%d",&arr[i]);
      }
      printf("Enter the number to be searched:");
      scanf("%d",&a);
      for(j=0;j<10;j++)
      {
                       if(a==arr[j])
                       {
                                    b++;
                       }
      }
      if(b!=0)
      {
              printf("The number has been found.");
      }
      else
      {
              printf("The number has not been found.");
      }
      getch();
}
