#include <stdio.h>
#include "checknumber.h"
int main()
{
    int i, n, ch, y;
    while (1)
    {

        printf("Choose the program : \n1.factorial \n2.prime \n3.reverse number \n4.Palindrome number  \n5.armstrong \n6.Power \n7.fibonacci number  \n8.neon \n9.perfect \n10.count digit   \n11.Exit \nenter a choice :");
        scanf("%d", &ch);
        if (ch == 11)
            return 0;

        printf("enter a number ");
        scanf("%d", &n);

        switch (ch)
        {
        case 1:
            printf("factorial num is :%d  :", factorial(n));

            break;
        case 2:
            if (prime(n))
                printf("%d is Prime No\n", n);
            else
                printf("%d is not Prime No\n", n);
            break;
        case 3:
            printf("Reverse = %d\n", reverse(n));
            break;
        case 4:
            if (palindrome(n))
            printf("%d is a palindrome\n", n);
            else
            printf("%d is not a palindrome\n", n);
            break;
            // armstrong number logic here
         case 5:
            if (armstrong(n)) 
              printf("%d is an Armstrong Number\n", n);
          else 
              printf("%d is not an Armstrong Number\n", n);
          break;
          case 6:
          printf("Enter the No / Power (y):");
          scanf("%d", &y);
          if (y < 0)
          {
              printf("Invalid Input ! No should not negative\n");
              continue;
          }
          printf("%d ^ %d = %d\n", n, y, power(n, y));
          break;
            case 7:
            fibonacci(n);
            break;

            case 8:
                if (neon(n)) 
                    printf("%d is a Neon Number\n", n);
                else 
                    printf("%d is not a Neon Number\n", n);
                break;
            case 9:
                if (perfect(n)) 
                    printf("%d is a Perfect Number\n", n);
                else 
                    printf("%d is not a Perfect Number\n", n);
                break;
                case 10 :printf("\nCount of Digit is %d \n ",DigitCnt(n));
                break;

          


        }
        
    }

    

    return 0;
}
