#include<stdio.h>
int main()
{
    int a;
    int *p;
    printf("enter a number :");
    scanf("%d",&a);
    p=&a;
     printf("number is %d",p);

    return 0;

}