#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    p = &a;
    q = &b;
    printf("enter 2 number :");
    scanf("%d%d", &a, &b);
    printf("addition is %d \n", *p + *q);

    printf("subtraction is %d", *p - *q);

    return 0;
}