#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str[10],str2[10];
      int i,a,b=0,c,d,j,f,k=0,g,h,m,w,;
      printf("Enter a string:");
      scanf("%s",&str);
      printf("Choose from the following options:-\n1.Length of the string.\n2.Total number of vowels in the string.\n3.Reverse of the string.\n4.Whether the string is pallindrome or not.\n5.To display the pattern."); 
      scanf("%d",&a);
      switch(a)
      {
               case 1:for(i=0;str[i]!='\0';i++);
               printf("The length of the string is %d.",i);
               break;
               case 2:for(c=0;str[c]!='\0';c++)
               {
                    if(str[c]=='A'||str[c]=='E'||str[c]=='I'||str[c]=='O'||str[c]=='U'||str[c]=='a'||str[c]=='e'||str[c]=='i'||str[c]=='o'||str[c]=='u')
                    {
                    b++;
                    }
               }
               printf("The number of vowels in the string is %d.",b);
               break;
               case 3:for(j=strlen(str)-1;j>=0;j--)
               {
                      str2[k]=str[j];
                      k++;
               }
               str2[k]='\0';
               printf("The reverserd string is %s",str2);
               break;
               case 4:for(d=0;str[d]!='\0';d++);
               for(f=0,d--;d>0;f++,d--);
               if(str[f]==str[d])
               {
               
                      printf("The entered string is a pallindrome.");
               }
               
               else
               {
                      printf("The entered string is not a pallindrome.");
               }
               break;
               case 5:for(g=0;str[g]!='\0';g++);
               printf("%s\n",str);
               for(h=1;h<=g;h++)
               {
                                for(w=1;w<=h;w++)
                                {
                                                 printf(" ");
                                }
                                printf("%s",str+h);
                                printf("\n");
                                
               }
               break;
      }
getch();
}
                    
