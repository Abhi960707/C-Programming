#include <stdio.h>
struct student
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    struct student s;

    printf("enter student details  :");
    printf("\n roll number :-");
    scanf("%d", &s.roll);
    printf("\n Name :-");
    scanf("%s", &s.name);
    printf("\n Marks :- ");
    scanf("%f", &s.marks);

    printf("\nGiven data is :\n");
    printf("\n roll number :%d", s.roll);
    printf("\n NAme  :%s", s.name);
    printf("\n  Marks :%.2f", s.marks);
    return 0;
}
