#include<stdio.h>
int main()
{
 int num,temp,div=1;
 printf("enter anumber :");
 scanf("%d",&num);

 temp=num;
 while (temp>=10)
 {
    temp/=10;
    div*=10;
 }
 while (div>0)
 {
    int digit =num/div;
    printf("%d",digit);
    num%=div;
    div/=10;

 }
 
 return 0;
}



   