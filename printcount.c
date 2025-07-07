#include<stdio.h>
int main()
{
    int n,i,sum=0,cnt=0;
    printf("enter a number :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf("%d",i);
            sum+=i;
            cnt++;
        }
        
    }
    printf("\n Count: %d,sum:%d\n",cnt,sum);
    return 0;
}