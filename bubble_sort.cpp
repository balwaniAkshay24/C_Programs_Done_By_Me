#include<stdio.h>
#include<conio.h>
main()

{
      int a[5],temp,i,j;
      printf("Enter an array:");
      for(i=0;i<5;i++)
      {
      scanf("%d",&a[i]);
      }
      for(i=0;i<4;i++)
      {
                      for(j=i;j<5-i;j++)
                      {
                                         if(a[j]>a[j+1])
                                         {
                                                        temp=a[j];
                                                        a[j]=a[j+1];
                                                        a[j+1]=temp;
                                         }
                      }
      }
      printf("The array sorted by bubble sorting is:");
      for(i=0;i<5;i++) 
      {
                        printf("\n%d",a[i]);
      }
      getch();
}
