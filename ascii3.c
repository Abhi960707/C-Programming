#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter anything :");
    scanf("%c",&ch);

    if(isalpha(ch))
    printf("Alphabet :");

    else if(isdigit(ch))
    printf("digit :");

    else
    printf("special symbol");

    return 0;

    
}
