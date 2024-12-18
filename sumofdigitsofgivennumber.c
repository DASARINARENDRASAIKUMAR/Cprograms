#include <stdio.h>

void main() 
{
    int rem,sum,n;
    printf("enter n value");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
      printf(" the sum of digits is %d",sum);
}
