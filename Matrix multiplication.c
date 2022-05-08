#include<stdio.h>
void main()
{
	int a[20][20],b[20][20],c[20][20],r,s,m,n,i,j,k;
	printf("Enter the rows and columns of first matrix:");
	scanf("%d%d",&r,&s);
	printf("Enter the rows and columns of second matrix:");
	scanf("%d%d",&m,&n);
	if(s!=m)
	{
		printf("Given matrix cannot be multiplied...");
	}
	else
	{
		printf("Enter the elements of first matrix:");
		for(i=0;i<r;i++)
		{
			for(j=0;j<s;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter the elements of second matrix:");
		for(i=0;i<r;i++)
		{
			for(j=0;j<s;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<s;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		
		printf("\nMultiplication of two matrix is:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<s;j++)
			{
				printf("\t%d",c[i][j]);
			}
			printf("\n");
		}
	}	
	
}
