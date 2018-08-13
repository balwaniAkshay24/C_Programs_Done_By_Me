#include<stdio.h>
#include<conio.h>
main()

{
      int a[20],i,j,b,temp;
      printf("Enter the number of elements required in an array:");
      scanf("%d",&b);
      printf("Enter the array:");
      for(i=0;i<b;i++)
      {
      scanf("%d",&a[i]);
      }
      for(i=0;i<b-1;i++)
      {
                      for(j=i;j<b-i-1;j++)
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
      for(i=0;i<b;i++) 
      {
                        printf("\n%d",a[i]);
      }
      getch();
}
