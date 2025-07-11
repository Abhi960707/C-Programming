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
    struct employee1 s;
    printf("Enter a SK Bit Employee Details :");
    printf("\n Id number :");
    scanf("%d", &s.id);
    printf("\n Employee Name  :");
    scanf("%s", &s.name);

    printf("\n Mobile No :");
    scanf("%d", &s.mbno);

    printf("\n Emp Address :");
    scanf("%s", &s.address);

    printf("\n Email :");
    scanf("%s", &s.email);

    printf("\n All employee record \n");
    printf("\n Id number :%d", &s.id);
    printf("\n Employee Name :%s", &s.name);
    printf("\n Mobile number  :%d", &s.id);
    printf("\n Emp Address :%s", &s.address);
    printf("\n Email :%s", &s.email);

    return 0;
}