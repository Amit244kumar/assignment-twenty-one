struct employee
{
    int emp_id;
    float emp_salary;
    char name[15];
};
int main()
{
    struct employee e1;
    printf("Enter the employee name:");
    gets(e1.name);
    printf("Enter the employee id:");
    scanf("%d",&e1.emp_id);
    printf("Enter the employee salary:");
    scanf("%f",&e1.emp_salary);
    printf("\nThe information:\n");
    printf("Id:%d\n",e1.emp_id);
    printf("Name:%s\n",e1.name);
    printf("Salary:%f",e1.emp_salary);
    getch();
    return 0;
}
