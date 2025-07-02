// occurrences means frequency
//atoi MEANS ALPHABET TO INTEGERS HE STDLIB.H MADHUN YETO
//FILE *fp;   
//fp=fopen("number.txt","r") r means read the file 
//file che 3 parameter 1.comma,2.integer, 3.store


#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], n, i, key, cnt = 0;

    fp = fopen("number.txt", "r");

    printf("enter a nm :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
        printf("%d ", a[i]);
    }

    printf("\n enter a element of occurences : ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            cnt++;
    }
    if (cnt == 0)
        printf("not found");
    else
        printf("count is %d", cnt);

    return 0;
}