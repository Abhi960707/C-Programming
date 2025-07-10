#include <stdio.h>
#include<math.h>

//Factorial number 
    int factorial(int n)
    {
        int fact = 1;
        while (n > 1)
        {
            fact*=n;
            n--;

        }
   

    return fact;
}
//  Prime Number 
int prime(int n){
    if(n<=1)
      if(n==2|| n==3)
        if(n%2==0||  n%3==0)
        for (int  i = 5; i <=sqrt(n); i+=6)
        {
        if (n%i==0||n%(i+2)==0)
        return 0;
      
        }
        }

        //--Reverse Number

int reverse(int n){
    int rev =0;
    while(n>0){
        rev = rev*10+(n%10);
        n/=10;
    }
    return rev;
}

//---Palindrome Number 

int palindrome(int n){
    return n==reverse(n);
}

//--Armstrong

int armstrong(int n){
    int temp =n,cnt =0;
    float result =0;

    while(temp>0){
        cnt++;
        temp/=10;
    }
    return result;
}

//--Square of No(Power program)

int power(int x, int y){
    int result =1;
    for(int i=1;i<=y;i++){
        result*=x;
    }
    return result;
}

//--Fibonacci series

void fibonacci(int n){
    int a=0,b=1,c;
    if(n>=1)printf("%d",a);
    if(n>=2)printf("%d",b);

    for(int i= 2; i<n;i++){
        c = a+b;
         printf("%d",c);
        a=b;
        b=c;
    }
    printf("\n");
}

//Neon
int neon(int n) {
    int sq = n * n;
    int sum = 0;
    while (sq != 0) {
        sum += sq % 10;
        sq /= 10;
    }
    return sum == n;
}
// Perfect Number 
int perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum== n;
}

//Count digit number
int DigitCnt(int n)
{
    int cnt=0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}










        
