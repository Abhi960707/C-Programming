#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter a number : ");
scanf("%d",&n);

while (n>=2)
{
   fact=fact*n;
   n--;

}
printf("factor is %d",fact);

    return 0;

}