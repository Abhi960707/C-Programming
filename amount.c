#include<stdio.h>
int main()
{
    int amt;
printf("enter a number ");
scanf("%d",&amt);

printf("100 *%d",amt/100);
amt=amt%10;

printf("\n5 *%d",amt/5);
amt=amt%5;

printf("\n1 *%d",amt/1);
amt=amt%1;
 
return 0;

}