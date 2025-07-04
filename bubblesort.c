#include<stdio.h>
int main()
{
    int a[100],i,n,j,temp;
    printf("how many elements you want to enter :");
    scanf("%d",&n);

    printf("enter %d element ",n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
       for ( i = 0; i < n; i++)
       {
    for ( j= 0; j <n-1-i; j++)
    {
        if (a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for ( i = 0; i <n; i++)
    printf("\t%d",a[i]);

    return 0;
}