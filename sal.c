#include<stdio.h>
int main()
{

    float bs,totalsalary,da,hra,tax;
    int eid;
    char ename[100];
    FILE *fp;
    fp =fopen("salaryslip.txt","w");

printf("enter employee details :");
printf("\nID :");
printf("%d",&eid);
printf("Name :");
printf("%s",&ename);
printf("basic salary :");
printf("%f",&bs);
printf("DA (%%):");
printf("%f",&da);
printf("HRA (%%):");
printf("%f",hra);
printf("TAX (%%):");
printf("%f",&tax);

totalsalary=bs + ((bs * (da+hra-tax))/100);
fprintf(fp,"\n------------------Employee salary slip--------------------");
fprintf(fp,"\n\t\tID                           :%d",eid);
fprintf(fp,"\n\t\tName                         :%d",ename);
fprintf(fp,"\n\t\t Basic salary                :%d",bs);
fprintf(fp,"\n\t\tDA   (%%)                        :%d",da);
fprintf(fp,"\n\t\tHRA    (%%)                        :%d",hra);
fprintf(fp,"\n\t\tTAX     (%%)                       :%d",tax);
fprintf(fp,"\n\t\tTOTAL SALARY                  :%d",totalsalary);



return 0;
}