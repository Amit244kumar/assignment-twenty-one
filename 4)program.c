#include<stdio.h>
struct employee
{
    int emp_id;
    float emp_salary;
    char name[15];
};
int main()
{
    int i,c=0,en;
    struct employee e1[10];
    for(i=0;i<10;i++)
    {
        fflush(stdin);
        printf("\n\nEnter %d employee's details:\n\n",i+1);
        printf("Enter the employee name:");
        gets(e1[i].name);
        printf("Enter the employee id:");
        scanf("%d",&e1[i].emp_id);
        printf("Enter the employee salary:");
        scanf("%f",&e1[i].emp_salary);

    }
   for(int i=0;i<10;i++)
   {
       if(c<e1[i].emp_salary){
         c=e1[i].emp_salary;
         en=i;

       }
   }
   printf("The highest salary is %f of %s",e1[en].emp_salary,e1[en].name);
   getch();
   return 0;
}
