#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of n :");
    scanf("%d",&n);

    for ( int i=1; i <=n; i++)
    {
      printf("multiplication table od %d:\n",i);
      for ( int j=1; j <=10; j++)
      {
       printf("%d * %d =%d\n",i,j,i*j);
      }
        printf("\n");
    }
  



    return 0;
}