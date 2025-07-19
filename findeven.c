#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value : ");
    scanf("%d",&n);

    printf("even numbers from 1 to %d",n);
    for ( i = 1; i <=n; i+=2)
    {
     printf("%d",i); 
    }
    getch();
}


   



