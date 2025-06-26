#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    printf("enter a number :  ");
    scanf("%d",&n);

   cnt=0;
for ( i = 2; i <=n/2; i++)
{
    if (n%i==0)
    cnt++;

}
if (cnt==0)
printf("prime number ");
else
printf("not prime number ");


    return 0;

}