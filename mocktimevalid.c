#include<stdio.h>
int main()
{
    int h,m,s;

    if(printf(" enter a hour "))
    scanf("%d",h);

    if(printf(" enter a hour "))
    scanf("%d",m);
    
    if(printf(" enter a hour "))
    scanf("%d",s);
    if (h>0 && h<24)
    {
        if(m>0 && m<60)
        {
        if(s>0 && s<60)
        printf("time is valid");
        else
        printf("second are invalid");

        }
        else
        printf("minute are invalid ");

    }
    else 
    printf("hours are invalid");
    
    
    
    
    return 0;

}
