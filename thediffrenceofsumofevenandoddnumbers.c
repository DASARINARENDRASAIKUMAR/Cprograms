#include <stdio.h>
void main ()
{
    int i,n,sumeven,sumodd;
    sumeven=0,sumodd=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
    {
        sumeven=sumeven+i;
    }
        else
        {
            sumodd=sumodd+i;
        }
    }
        printf("the difference is %d",abs(sumeven-sumodd));
}
