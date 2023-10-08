#include<stdio.h>
int main() 
{
	int a[100],b[100],i,j,m,n;
	printf("Enter number of elements for a and b: ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		printf("Enter elements for a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("Enter elements for b[%d]: ",j+1);
		scanf("%d",&b[j]);
	}
	printf("The cartesian product of set a and set b is: ");
	printf("{");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{
		printf("(");
		printf("%d,%d",a[i],b[j]);
		if(i==m-1&&j==n-1)
		printf(")");
		else
		printf("),");
		}	
		}
		printf("}");
		return 0;
}

