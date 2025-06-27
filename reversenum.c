#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter  number : ");
    scanf("%d",&n);
    while (n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse number is %d",rev);
    return 0;

}