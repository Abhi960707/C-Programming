#include<stdio.h>
int main()
{
    int n,i,cnt=0,sum=0;
    printf("enter a number : ");
    scanf("%d",&n);

    printf("factor of %d are :",n);
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf("%d",i);
            cnt++;
            sum+=i;
        }
        
    }
    printf("\n total number of factor : %d\n",cnt);
    printf("sum of factors: %d\n",sum);
    return 0;

    
}