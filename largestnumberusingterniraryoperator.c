#include<stdio.h>
void main()
{
	int a, b, c, larg;
	printf("Enter th numbers a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	larg= ((a>b)&&(a>c)?a:(b>c?b:c));
	printf("Largest number is: %d", larg);
}
