#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("enter a  number :");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n=n/10;
        
    }
     printf("count of digit is %d",cnt);

    return 0;

}