// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
void main() {
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
d=((b*b)-(4*a*c));
r1= (-b+sqrt(d)/2*a);
r2= (-b-sqrt(d)/2*a);
if (d>0)
{
    printf("%f%f",%r1,%r2);
}
else if
(d<0)
{
    printf("roots are imaginary");
}
else
{
    printf("roots are real and equal");
}
}
