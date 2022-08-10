#include<stdio.h>
struct marks
{
    char name[20];
    int roll_no;
    int chem_marks,math_marks,phy_marks;
};
int main()
{
    int sum=0,per;
    struct marks st[5];
    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nEnter the %d student Details:",i+1);
        printf("\nEnter the student name:");
        gets(st[i].name);
        printf("Enter the student roll no:");
        scanf("%d",&st[i].roll_no);
        printf("Enter the chemistry marks:");
        scanf("%d",&st[i].chem_marks);
        printf("Enter the math marks:");
        scanf("%d",&st[i].math_marks);
        printf("Enter the physics marks:");
        scanf("%d",&st[i].phy_marks);
    }
    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        sum=st[i].chem_marks+st[i].math_marks+st[i].phy_marks;
        printf("\n\nThe student %s and roll no %d his marks in percentage %f",st[i].name,st[i].roll_no,(sum/300.0)*100);
    }
    getch();
    return 0;
}
