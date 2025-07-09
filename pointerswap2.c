#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("ente r 2 no:");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
      printf("after swapping \n x=%d\n y=%d", x, y);

    return 0;
}