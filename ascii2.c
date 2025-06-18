#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf("%c",&ch);

    if((ch>=60 && ch<=90)||(ch>=97 && ch<=122))
    printf("Alphabet :");

    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    printf("digit :");

    else if(ch>'0' &&ch<='9')
    printf("special symbol :");

    return 0;



}