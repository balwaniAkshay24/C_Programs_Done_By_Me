#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
int main()
{
      int n, i, *a, *b, *c;
      printf("Enter the number of elements of the array:");
      scanf("%d",&n);
      a=(int*)malloc(n*sizeof(int));
      b=(int*)malloc(n*sizeof(int));
      c=(int*)malloc(n*sizeof(int));
      printf("Enter the elements of the first array:");
      for(i=0;i<n;i++)
      {
                      scanf("%d",a+i);
      }
      printf("Enter the elements of the second array:");
      for(i=0;i<n;i++)
      {
                      scanf("%d",b+i);
      }
      for(i=0;i<n;i++)
      {
      *(c+i)=*(a+i)+*(b+i);
      }
      printf("The sum of the two arrays is:");
      for(i=0;i<n;i++)
      {
                      printf("\n%d",*(c+i));
      }
      getch();
      }
      
