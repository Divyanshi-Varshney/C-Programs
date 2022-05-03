#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("Enter a number to find its factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
}
