#include <stdio.h>
void main() 
{
    int rem,rev,n,temp;
    printf("enter n value");
    scanf("%d",&n);
    temp=n;
    rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (temp==rev)
    {
      printf(" it is a palindrome");
        
    }
      else
      {
        printf(" it is a not  palindrome");
}
}
