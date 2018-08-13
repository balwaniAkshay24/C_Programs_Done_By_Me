#include<stdio.h>
#include<conio.h>
main()
{
       int a[5],b[5],intr[5],uni[10],flag=0,k=0,l=0,i,j;
       printf("Enter the elements of array-1:");
       for(i=0;i<5;i++)
       {
                        scanf("%d",&a[i]);
       }
       printf("Enter the elements of array-2:");
       for(i=0;i<5;i++)
       {
                        scanf("%d",&b[i]);
       }
       for(i=0;i<5;i++)
       {
                        for(j=0;j<5;j++)
                        {
                                        if(a[i]==b[j])
                                        {
                                                      intr[k]=a[i];
                                                      k++;
                                        }
                        }
       }
       for(i=0;i<5;i++)
       {
                        for(j=0;j<5;j++)
                        {
                                        if(a[i]==b[j])
                                        {
                                                      flag=1;
                                        }
                                        if(i==0)
                                        {
                                                uni[l]=b[j];
                                                l++;
                                        }
                        }
                        if(flag!=1)
                        {
                                   uni[l]=a[i];
                                   l++;
                        }
                        else
                        flag=0;
       }
       printf("The intersection of the two sets is:");
       for(i=0;i<k;i++)
       {
                       printf(" %d",intr[i]);
       }
       printf("\nThe union of the sets is:");
       for(i=0;i<l;i++)
       {
                        printf(" %d",uni[i]);
       }
       getch();
}
       
