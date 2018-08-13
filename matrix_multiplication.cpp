#include <stdio.h>
#include<conio.h>
main()
{
     int a[10][10], b[10][10], c[10][10], i, j, k, r1, r2, c1, c2;
   back:
     printf("\nEnter no. of rows and columns of Matrix A: ");
     scanf("%d %d", &r1, &c1);
printf("\nEnter no. of rows and columns of Matrix B: ");
     scanf("%d %d", &r2, &c2);
if (c1 != r2)
{
         printf("\n\nMultiplication is not possible\n");
         goto back;
     }   
printf("\n\nEnter elements of Matrix A:\n");
     for (i=0; i<r1; i++)
         for (j=0; j<c1; j++)
           scanf("%d", &a[i][j]);
    
printf("\nEnter elements of Matrix B:\n");
     for (i=0; i<r2; i++)
         for (j=0; j<c2; j++)
           scanf("%d", &b[i][j]);
    
printf("\n\nElements of Matrix A:\n\n");
     for (i=0; i<r1; i++)
{
         for (j=0; j<c1; j++)
           printf("\t%d", a[i][j]);
         printf("\n\n");
     }
printf("\n\nElements of Matrix B:\n");
     for (i=0; i<r2; i++)
{
         for (j=0; j<c2; j++)
           printf("\t%d", b[i][j]);
         printf("\n\n");
     }
for (i=0; i<r1; i++)
         for (j=0; j<c2; j++)
{
   c[i][j] = 0;
               for (k=0; k<r2; k++)
c[i][j] = c[i][j] + a[i][k] * b[k][j];
         }
    
printf("\n\nMultiplication of Matrices:\n\n");
     for (i=0; i<r1; i++)
{
         for (j=0; j<c2; j++)
          printf("\t%d", c[i][j]);
         printf("\n\n");
     }
getch();
}
