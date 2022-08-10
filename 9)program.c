#include<stdio.h>
struct student
{
    int student_Id;
    char name[20];
    int roll_no;
};
int main()
{
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\nEnter the %d student details",i+1);
        printf("\nEnter the name:");
        gets(s1[i].name);
        printf("Enter the student id:");
        scanf("%d",&s1[i].student_Id);
        printf("Enter the student roll no:");
        scanf("%d",&s1[i].roll_no);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d student details",i+1);
        printf("\nname:%s",s1[i].name);
        printf("\nstudent id %d:",s1[i].student_Id);
        printf("\nstudent roll no %d:",s1[i].roll_no);
    }
    getch();
    return 0;
}
