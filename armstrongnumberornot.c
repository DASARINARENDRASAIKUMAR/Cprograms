#include <stdio.h>
void main() 
{
    int rem,sum,n,temp;
    printf("enter n value");
    scanf("%d",&n);
    temp=n;
    sum=0;
    while(n>0)
    {
        rem=n%10;
       sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (temp==sum)
    {
      printf(" it is a armdtrong number");
        
    }
      else
      {
        printf(" it is a not  armstrong number");
}
}
