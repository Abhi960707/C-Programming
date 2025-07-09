#include <stdio.h>
int main()
{
    int a[100], *p, i, n;
    p = &a[0];
    printf("enter a n :");
    scanf("%d", &n);
    printf("enter number \n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("given data \n");
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);

    return 0;
}