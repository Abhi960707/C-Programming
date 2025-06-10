#include<stdio.h>
int main()
{
float bs,da,hra,tax;
float totalsalary;

 

printf("enter the basic salary :");
scanf("%f",&bs);

printf("enter the daily allowance :");
scanf("%f",&da);

printf("enter the house rent allowance :");
scanf("%f",&hra);

printf("enter the tax :");
scanf("%f",&tax);


totalsalary=bs+((bs*(da+hra-tax))/100);
printf("Total Salary : %.2f",totalsalary);

return 0;

}