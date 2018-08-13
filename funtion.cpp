#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str1[70],str2[30];
      int a;
      char comp(char str1[],char str2[]);
      char fnlon(char str1[],char str2[]);
      char con(char str1[],char str2[]);
      char cpy(char str1[],char str2[]);
      char occ(char str1[],char str2[]);
      printf("Choose from the following options:\n1.Compare the two string.\n2.Find the longer string.\n3.Concatenate the two string.\n4.Copy one string into another.\n5.Find the occurance of a sub string in the main string.");
      scanf("%d",&a);
      switch(a)
      {
               case 1:printf("Enter the first string:");
                      scanf("%s",str1);
                      printf("Enter the second string:");
                      scanf("%s",str2);
                      comp(str1,str2);
                      break;
               case 2:printf("Enter the first string:");
                      scanf("%s",str1);
                      printf("Enter the second string:");
                      scanf("%s",str2);
                      fnlon(str1,str2);
                      break;
               case 3:printf("Enter the first string:");
                      scanf("%s",str1);
                      printf("Enter the second string:");
                      scanf("%s",str2);
                      con(str1,str2);
                      break;
               case 4:printf("Enter a string:");
                      scanf("%s",str1);
                      cpy(str1,str2);
                      break;   
               case 5:printf("Enter the main string:");
                      scanf("%s",str1);
                      printf("Enter the sub string:");
                      scanf("%s",str2);
                      occ(str1,str2);
                      break;
                      }    
       getch();
}
char comp(char str1[],char str2[])
{
int i,b=0,c=0;
if(strlen(str1)==strlen(str2))
   {
   b++;
   }
else
   {
   printf("The two entered strings are not equal.");
   }
if(b!=0)
   {
   for(i=0;i<strlen(str1);i++)
   {
      if(str1[i]==str2[i])
      {
      c++;
      }
   }
   if(c==strlen(str1))
      {
      printf("The two strings are equal.");
      }
}
}

char fnlon(char str1[],char str2[])
{
     if(strlen(str1)>strlen(str2))
     {
     printf("First string is longer than the second string.");
     }
     else
     {
     printf("Second string is longer than the first string.");
     }
}               
char con(char str1[],char str2[])
{
int i,k=strlen(str1);
for(i=0;i<strlen(str2);i++)
{
   str1[k]=str2[i];
   k++;
}
str1[k]='\0';
printf("The concatenated string is %s.",str1);
}    
char cpy(char str1[],char str2[])
{
int i;
for(i=0;str1[i];i++)
{
    str2[i]=str1[i];
}
str2[i]='\0';
printf("The copied string is %s.",str2);      
}                     
char occ(char str1[],char str2[])
{
int i,j,k,found=0;
for(i=0;str1[i]&&!found;i++)
{
         for(j=0,k=0;str1[j]&&str1[j]==str2[k];j++,k++);
         if(str2[k]=='\0')
         found=1;
}
if(found!=0)
printf("The sub string has been found in the main string.");
else
printf("The sub string has not been found in the main string.");
}
                          
