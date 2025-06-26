#include<stdio.h>
#include<math.h>
int main()
{
int n,i,flag=1;
 printf("ENTER A NUMBER : ");
 scanf("%d",&n);
 flag=1;
 if (n%2==0 || n%3==0)
 flag=0;
 else
 for ( i = 5; i <=sqrt(n); i+=6)
 {
    if (n%i==0 || n%(1+2)==0)
    {
    flag=0;
    break;

    }
    
 }
 if (flag==1)
 printf("prime number");
 else 
 printf("not prime number ");

    return 0;

}