#include<stdio.h>
int main()
{
    float bs,totalSalary,da,hra,tax;
    int eid;
    char ename[100];
    FILE * fp;

    fp = fopen("salarySlip.txt","w");

    printf("Enter Employee Details : ");
    printf("\nID : ");
    scanf("%d",&eid);
        
    printf("Name : ");
    scanf("%s",&ename);
    printf("Enter Basic Salary : ");
    scanf("%f",&bs);

    printf("DA : ");
    scanf("%f",&da);

    printf("HRA : ");
    scanf("%f",&hra);

    printf("TAX : ");
    scanf("%f",&tax);

    totalSalary=bs+((bs*(da+hra-tax))/100);
    printf("Total Salary : %.2f",totalSalary);

    fprintf(fp,"\n-------------Employee Salary Slip-----------");
    fprintf(fp,"\n\t\tID           :%d",eid);
    fprintf(fp,"\n\t\tName         :%s",ename);
    fprintf(fp,"\n\t\tBasic Salary :%.2f",bs);
    fprintf(fp,"\n\t\tDA           :%.2f",da);
    fprintf(fp,"\n\t\tHRA          :%.2f",hra);
    fprintf(fp,"\n\t\tTAX          :%.2f",tax);
    fprintf(fp,"\n\t\tTotal Salary :%.2f",totalSalary);

   return 0;

}