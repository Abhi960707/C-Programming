#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value :");
    scanf("%d",&n);

    for ( i =2; i <=n; i+=2)
    {
        sum+=i;

    }
    printf("sum of even numbers from 1 to %d: %d\n",n,sum);
    return 0;
}