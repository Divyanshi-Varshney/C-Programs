#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
}
