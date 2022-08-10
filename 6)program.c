#include<stdio.h>
struct employee
{
    int emp_id;
    float emp_salary;
    char name[15];
};
int main()
{
    int i,en,v;
    struct employee e1[10],c;
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
    v=10;
   for(int i=0;i<10;i++)
   {
       for(int j=0;j<v -1-i;j++)
       if(compare(e1[j].name,e1[j+1].name)==1){
         c=e1[j];
         e1[j]=e1[j+1];
         e1[j+1]=c;
       }
   }
   for(int i=0;i<v;i++)
   {
       printf("\nThe %d employee",i+1);
       printf("\nname:%s\n",e1[i].name);
       printf("\nId:%d\n",e1[i].emp_id);
       printf("\nsalary:%f",e1[i].emp_salary);
   }
   return 0;
}

int compare(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i]||s2[i];i++)
    {
        if(s1[i]>s2[i])
            return 1;
        if(s1[i]<s2[i])
              return -1;
    }
    return 0;
}
