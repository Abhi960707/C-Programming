#include <stdio.h>
struct employee1
{
    int id;
    char name[100];
    long mbno;
    char address[100];
    char email[100];
};
int main()
{
    struct employee1 s[100];
    int n,i;

    printf("how many :");
    scanf("%d",&n);
    
    printf("how many  details:");
    for ( i = 0; i <n; i++)
    {
        printf("Enter a SK Bit Employee Details :");
    printf("\n Id number :");
    scanf("%d", &s[i].id);
    printf("\n Employee Name  :");
    scanf("%s", &s[i].name);

    printf("\n Mobile No :");
    scanf("%d", &s[i].mbno);

    printf("\n Emp Address :");
    scanf("%s", &s[i].address);

    printf("\n Email :");
    scanf("%s", &s[i].email);
    }
    
   
printf("how many  details:");
    for ( i = 0; i <n; i++)
    {
    printf("\n All employee record \n");
    printf("\n Id number :%d", s[i].id);
    printf("\n Employee Name :%s", s[i].name);
    printf("\n Mobile number  :%d", s[i].id);
    printf("\n Emp Address :%s", s[i].address);
    printf("\n Email :%s", s[i].email);
    }

    return 0;
}