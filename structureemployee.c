#include <stdio.h>
struct employee
{
    int id;
    char name[100];
    float salary;
    int phone;
};
int main()
{
    struct employee s;

    printf("enter employye  details  :");
    printf("\n Id number  :-");
    scanf("%d", &s.id);
    printf("\n  Emp Name :-");
    scanf("%s", &s.name);
    printf("\n Emp Salary :- ");
    scanf("%f", &s.salary);
    printf("\n  Emp Phone number  :-");
    scanf("%d", &s.phone);

    printf("\n All Employee Record:\n");
    printf("\n Id number  :%d", s.id);
    printf("\n Emp NAme  :%s", s.name);
    printf("\n  Emp salary :%.2f", s.salary);
    printf("\n  Emp phone  :%d", s.phone);
    return 0;
}
