#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
printf("enter 3 number");
scanf("%d%d%d",&a,&b,&c);

printf("max is %.3f",fmax(a,fmax(b,c)));


return 0;



}