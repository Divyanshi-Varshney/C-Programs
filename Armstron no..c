#include<stdio.h>
#include<math.h>

int main()
{
	int n,temp,r,sum=0,count=0;
	printf("Enter a no. to check for armstrong:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		count=count+1;
		temp=temp/10;
	}
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		sum+=pow(r,count);
		temp=temp/10;
	}
	printf("Sum of number is:%d",sum);
	if(n==sum)
	{
		printf("\nEntered number is armstrong");
	}
	else
	{
		printf("\nEntered number is not armstrong");
	}
	return 0;
}
