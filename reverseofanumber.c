#include <stdio.h>

void main() 
{
    int rem,rev,n;
    printf("enter n value");
    scanf("%d",&n);
    rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
      printf(" the sum of digits is %d",rev);
}
