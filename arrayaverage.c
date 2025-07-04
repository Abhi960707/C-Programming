#include<stdio.h>
int main()
{
   int n,i;
   float sum = 0,avg;
   printf("enter how many number : ");
   scanf("%d",&n);
   float num[n];

   for ( i = 0; i <n; i++)
   {
    printf("enter number %d:",i+1);
    scanf("%f",&num[i]);
    sum+=num[i];

   }
   avg=sum/n;
   printf("sum =%.2f\n",sum);
   printf("average =%.2f\n",avg);
   
    return 0;
}