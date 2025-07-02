// occurrences means frequency
//ATOI MEANS ALPHABET TO INTEGERS HE STDLIB.H MADHUN YETO
//FILE *fp;   
//fp=fopen("number.txt","r") r means read the file 
//file che 3 parameter 1.comma,2.integer, 3.store

#include <stdio.h>
int main()
{
    int a[100], i, n, key, cnt=0;
   printf("how many elements you want to enter :");
  scanf("%d", &n);
   printf("enter %d elements :",n);
    for (i = 0; i < n; i++)
      scanf("%d",&a[i]);

    printf("enter a element of occurences : ");
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