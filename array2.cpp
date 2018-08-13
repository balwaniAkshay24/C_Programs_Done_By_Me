#include<stdio.h>
#include<conio.h>
main()
{
      int m1[20][20],m2[20][20],add[20][20],sub[20][20],tran[20][20],i,j,a,b,c,d;
      printf("Enter the length of matrix-1 in number of rows and columns:");
      scanf("%d %d",&a,&b);
      printf("Enter the length of matrix-2 in number of rows and columns:");
      scanf("%d %d",&c,&d);
      printf("Enter the elements of matrix-1:");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      scanf("%d",&m1[i][j]);
                      }
      }
      printf("Enter the elements of matrix-2:");
      for(i=0;i<c;i++)
      {
                      for(j=0;j<d;j++)
                      {
                                      scanf("%d",&m2[i][j]);
                      }
                      }
      printf("Entered elements of matrix-1:\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                  printf(" %d",m1[i][j]);
                      }
                      printf("\n");
      }
      printf("Entered elements of matrix-2:\n");
      for(i=0;i<c;i++)
      {
                      for(j=0;j<d;j++)
                      {
                                      printf(" %d",m2[i][j]);
                      }
                      printf("\n");
      }
      if(a==c&&b==d)
      {
      printf("The addition of two matrix are:\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      add[i][j]=m1[i][j]+m2[i][j];
                                      }
      }
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      printf(" %d",add[i][j]);
                      }
                      printf("\n");
      }
      printf("The subtraction of two matrix are:\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      sub[i][j]=m1[i][j]-m2[i][j];
                                      }
      }
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      printf(" %d",sub[i][j]);
                      }
                      printf("\n");
      }
      }
      else
      {
          printf("ERROR\n");
      }
      printf("The transpose of matrix-1 is:\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                  printf(" %d",m1[j][i]);
                      }
                      printf("\n");
      }
      printf("The transpose of matrix-2 is:\n");
      for(i=0;i<c;i++)
      {
                      for(j=0;j<d;j++)
                      {
                                  printf(" %d",m2[j][i]);
                      }
                      printf("\n");
      }
      getch();
}
