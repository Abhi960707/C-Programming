#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n : ");
    scanf("%d",&n);

    printf("even numbers from 1 to %d \n",n);
    for ( i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
     printf("%d",i); 
    }
}
printf("\n");

printf("odd numbers from 1 to %d \n",n);
 for ( i = 1; i <=n; i++)
 {
    if(i%2!=0){
        printf("%d",i);

    }
 }
 
    printf("\n");
 
    return 0;
}