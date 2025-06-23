#include<stdio.h>
int main()
{
    int mno;
    printf("enter month number :");
    scanf("%d",&mno);
    switch(mno)
    {
        case 1: printf("31 days");
        break;
        
        case 2: printf("28/29 days ");
        break ;

    }
    return 0;
    

}