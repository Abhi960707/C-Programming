#include <stdio.h>
int main()
{

    int a[100], n, i, option, max, min, sum = 0, cnt = 0, average, temp, j, flag = 0, key;

    printf("Enter number of element :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("1:Display Array\n");
    printf("2:Maximum Element Of Array\n");
    printf("3:Minimum Element Of Array\n");
    printf("4:Sum Of Array Element\n");
    printf("5:Avarage Of Array Element\n");
    printf("6:Sorts Array\n");
    printf("7:Linear Search\n");

    printf("Enter Option to Perform Operation :");
    scanf("%d", &option);

    switch (option)
    {

    case 1:
        for (i = 0; i < n; i++)
            printf("\t%d", a[i]);
        break;

    case 2:
        max = a[0];
        for (i = 0; i < n; i++)
            if (max < a[i])
                max = a[i];
        printf("Maximum Element is :%d", max);
        break;

    case 3:
        min = a[0];
        for (i = 0; i < n; i++)
            if (min > a[i])
                min = a[i];
        printf("Minimum Element is :%d", min);
        break;

    case 4:
        for (i = 0; i < n; i++)
            sum = sum + a[i];
        printf("Sum Of Array is :%d", sum);
        break;

    case 5:

        for (i = 0; i < n; i++)
            sum = sum + a[i];
        average = sum / n;
        printf("Avarage of Array is :%d", average);
        break;

    case 6:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        printf("Sorted Array Is :");
        for (i = 0; i < n; i++)
            printf("%d\t", a[i]);
        break;

    case 7:
        printf("Enter Search Element");
        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (key == a[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("Element Found...");
        else
            printf("Element Not Found...");
        break;

    default:
    printf("Wrong Option");
    }

    return 0;
}