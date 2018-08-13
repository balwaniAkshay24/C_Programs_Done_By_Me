#include<stdio.h>
#include<conio.h>
main()
{
      struct pay_slip
      {
             int id;
             char name[20];
             char des[20];
             char depart[20];
             int bs_salary;
      }emp;
      printf("Enter the details of an employee:-\n");
      printf("Id Number:\n");
      scanf("%d",&emp.id);
      printf("Name:\n");
      scanf("%s",&emp.name);
      printf("Designation:\n");
      scanf("%s",&emp.des);
      printf("Department:\n");
      scanf("%s",&emp.depart);
      printf("Basic Salary:\n");
      scanf("%d",&emp.bs_salary);
      printf("The entered details of the employee are:\n");
      printf("Id Number: %d\nName: %s\nDesignation: %s\nDepartment: %s\nBasic Salary: %d\n",emp.id,emp.name,emp.des,emp.depart,emp.bs_salary);
      getch();
}
      
             
