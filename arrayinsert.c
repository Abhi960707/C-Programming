
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], n, i, key, cnt = 0,pos;

    fp = fopen("number.txt", "r");

    printf("enter a number :");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
        printf("%d ", a[i]);
    }
 printf("\n enter a number to position :");
    scanf("%d", &pos);
       printf("\n enter a number to insert :");
    scanf("%d", &key);
   

    for ( i = 0; i>=pos; i--)
    {
    a[i]=a[i-1];
    }
    a[pos-1]=key;
    n++;
   

    for ( i = 0; i <n; i++)
    printf("%d ",a[i]);
    
    return 0;
}