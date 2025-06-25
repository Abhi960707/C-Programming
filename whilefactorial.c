#include<stdio.h>
int main()
{
int n,fact=1,i;
printf("enter a number : ");
scanf("%d",&n);
i=2;
while (i<=n)
{
   fact=fact*i;
   i++;

}
printf("factor is %d",fact);

    return 0;

}