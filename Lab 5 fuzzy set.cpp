//WAP to implement fuzzy sets
#include<stdio.h>
int main()
{
	float a[100],b[100],uni[100],inter[100],compA[100],compB[100];
	int i,n;
	printf("Enter the number of elements for set a and set b: ");
	scanf("%d",&n);
	printf("Enter the membership function of a: ");
	for(i=0;i<n;i++)
	{
	scanf("%f",&a[i]);
    }
    printf("Enter the membership function of b: ");
	for(i=0;i<n;i++)
	{
	scanf("%f",&b[i]);
    }

	for(i=0;i<n;i++)
	{
		if(a[i]>b[i]){
			uni[i]=a[i];
			inter[i]=b[i];
		}
		else if(a[i]<b[i]){
			uni[i]=b[i];
			inter[i]=a[i];
		}
		else {
			uni[i]=a[i];
			inter[i]=a[i];
		}
		compA[i]=1-a[i];
		compB[i]=1-b[i];
	}
	printf("The Union of the given fuzzy sets is: ");
	printf("{");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%.1f,",uni[i]);
		else
		printf("%.1f",uni[i]);
	}
	printf("}");
	printf("\nThe Intersection of the given fuzzy sets is: ");
	printf("{");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%.1f,",inter[i]);
		else
		printf("%.1f",inter[i]);
	}
	printf("}");
	 printf("\nThe Compliment of the set a is: ");
	printf("{");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%.1f,",compA[i]);
		else
		printf("%.1f",compA[i]);
	}
	printf("}");
	printf("\nThe Compliment of the set b is: ");
	printf("{");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%.1f,",compB[i]);
		else
		printf("%.1f",compB[i]);
	}
	printf("}");
	return 0;
}
