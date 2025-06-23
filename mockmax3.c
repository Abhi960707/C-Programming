#include<stdio.h>
int main()
{
    int a,b,c;
    if(printf("enter a number :"))
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b=a;
    if (c>b)
    b=c;


   if(printf("max is %d",b))

    return 0;
}