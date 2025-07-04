#include<stdio.h>
int main()
{
    int n,i,first,second,a[100];
    printf("enter a size araray number  : ");
    scanf("%d",&n);

    printf("entter %d element :\n",n);
    for ( i = 0; i <n; i++)
    {
    scanf("%d",&a[i]);

    }
    
    if (a[0]>a[1])
    {
        first=a[0];
        second=a[1];
    }else{ 
        first=a[1];
        second=a[0];
    }
    for ( i = 2; i <n; i++)
    {
        if(a[i]>first){
            second=first;
        first=a[i]; 
        }else if(a[i]>second&&a[i]!=first)
        {
            second=a[i];

        }
        
    }
    printf("largest=%d\n",first);
     printf(" second largest=%d\n",second);
    

    return 0;

}